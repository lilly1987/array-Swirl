#include <iostream> //std
#include <string> //getline
#include "�迭���.h"
#include "�迭ȸ��.h"
#include "�迭�Ҵ�.h"

using namespace std;

int main(int argc, char* argv[]) {

	unsigned int r, c;//r:��,c:��

	do
	{
		// �ܼ��� ��� ��¿����� cout �ݺ����� ���°� ���ɻ� ���� ����
		// ���������� ������ �ִٸ� �𸦱�
		// ������ �̸� ó���� �ѹ��� ����ϴ°� �� ����

		// �Է� �ޱ�
		cout << "���ڸ� �Է�." << endl;
		cout << "0 �Է½� ����" << endl;
		cout << "�� ����:";
		//getline(cin, v);
		cin >> r;
		if (r <= 0)
		{
			break;
		}
		cout << "�� ����:";
		cin >> c;
		if (c <= 0)
		{
			break;
		}
		//cin.clear();
		//fflush(stdin);//���������� �۵� �ȵ�.

		int **a;//   �ð����
		int **b;// �ݽð����
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

		// �ð����
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

		// �ݽð����
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

	} while (true); // 0 �Է½� ����
}