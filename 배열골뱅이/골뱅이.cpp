#include <iostream> //std
#include <string> //getline
#include "배열출력.h"
#include "배열회전.h"
#include "배열할당.h"

using namespace std;

int main(int argc, char* argv[]) {

	unsigned int r, c;//r:행,c:열

	do
	{
		// 단순히 모양 출력용으로 cout 반복으로 쓰는건 성능상 좋지 않음
		// 수학적으로 쓸일이 있다면 모를까
		// 변수에 미리 처리후 한번만 출력하는게 젤 좋음

		// 입력 받기
		cout << "숫자만 입력." << endl;
		cout << "0 입력시 종료" << endl;
		cout << "행 갯수:";
		//getline(cin, v);
		cin >> r;
		if (r <= 0)
		{
			break;
		}
		cout << "열 갯수:";
		cin >> c;
		if (c <= 0)
		{
			break;
		}
		//cin.clear();
		//fflush(stdin);//리눅스에선 작동 안됨.

		int **a;//   시계방향
		int **b;// 반시계방향
		//a = a;
		//cout << &a <<  endl;
		//cout << &a << '\t' << a   << endl;
		//cout << *a << endl;// error
		//a:0x0115fbfc {0xcccccccc {???}}

		//a=arr_new2( r, c);
		arr_new2(a, r, c);
		//&a:0x00f8fcfc {0x012ce0a8 {0xcdcdcdcd {???}}}
				
		//cout << &a << '\t' << a   << endl;
		
		arr_new2(b, r, c);
		//cout << &a << '\t' << a   << endl;

		//b=arr_new2( r, c);

		unsigned int n = 0,i=0,j=-1,s=1,ck=c,cr=r;

		// 시계방향
		do
		{
			for (unsigned int p = 0; p < ck; p++)
			{
				j += s;
				a[i][j] = ++n;
				//++n;
				cout << i << '\t' << j << '\t' <<n<<endl;
			}
			ck--;
			cr--;		
			for (unsigned int p = 0; p < cr; p++)
			{
				i += s;
				a[i][j] = ++n;
				//++n;
				cout << i << '\t' << j << '\t' << n << endl;
			}
			if (ck ==0|| cr == 0)
			{
				break;
			}
			s *= -1;
		} while (true);
		
		n = 0, i = -1, j = 0, s = 1, ck = c, cr = r;

		// 반시계방향
		do
		{
			for (unsigned int p = 0; p < cr; p++)
			{
				i += s;
				b[i][j] = ++n;
				//++n;
				cout << i << '\t' << j << '\t' << n << endl;
			}
			ck--;
			cr--;		
			for (unsigned int p = 0; p < ck; p++)
			{
				j += s;
				b[i][j] = ++n;
				//++n;
				cout << i << '\t' << j << '\t' <<n<<endl;
			}
			if (ck ==0|| cr == 0)
			{
				break;
			}
			s *= -1;
		} while (true);

		arr_out2( a, r, c);
		arr_out2( b, r, c);

		arr_del2(a, r);
		arr_del2(b, r);

	} while (true); // 0 입력시 종료
}