
/// <summary>
/// 2���� �迭 �ʱ�ȭ
/// ������ ȣ��Ȱ��� ���� �ȵ�
/// </summary>
//void arr_new2(int **arr,int v1,int v2) {
//	arr= new int *[v1];
//	//arr= new int *[v1];
//	cout << arr << '\t' << &arr << endl;
//	for (int i = 0; i < v1; i++) {
//		arr[i] = new int[v2];
//	cout << arr <<'\t'<< &arr <<'\t'<< arr[i] << '\t' << &arr[i] << endl;
//	}
//}

/// <summary>
/// 2���� �迭 �ʱ�ȭ
/// �ȵ�
/// </summary>
//void arr_new2(int ***ar,int v1,int v2) {
//	int **arr= new int *[v1];
//	//arr= new int *[v1];
//	cout << ar << '\t' << &ar << '\t' << arr << '\t' << &arr << endl;
//	for (int i = 0; i < v1; i++) {
//		arr[i] = new int[v2];
//	cout << ar << '\t'<< &ar << '\t' << arr <<'\t'<< &arr <<'\t'<< arr[i] << '\t' << &arr[i] << endl;
//	}
//	ar = &arr;
//}

/// <summary>
/// 2���� �迭 �ʱ�ȭ
/// �ƿ� 2���� �迭 ���� �ϴ� ������ ���µ��� ��� �ϳ��� ����
/// </summary>
void arr_new2(int **&arr,int v1,int v2) {
	 arr= new int *[v1];
	//arr= new int *[v1];
	//cout << ar << '\t' << &ar << '\t' << arr << '\t' << &arr << endl;
	for (int i = 0; i < v1; i++) {
		arr[i] = new int[v2];
	//cout << ar << '\t'<< &ar << '\t' << arr <<'\t'<< &arr <<'\t'<< arr[i] << '\t' << &arr[i] << endl;
	}
	//ar = &arr;
}

/// <summary>
/// 2���� �迭 �ʱ�ȭ
/// 
/// </summary>
int** arr_new2(int v1,int v2) {		
	//int **arr= new int *[v1];
	int **arr= new int *[v1];
	cout << arr << '\t' << &arr << endl;
	for (int i = 0; i < v1; i++) {
		arr[i] = new int[v2];
	cout << arr <<'\t'<< &arr <<'\t'<< arr[i] << '\t' << &arr[i] << endl;
	}
	//ar = &arr;	
	return arr;
}

/// <summary>
/// 2���� �迭 ���� 
/// 
/// </summary>

void arr_del2(int **&arr, int v1) {
	for (int i = 0; i < v1; i++) {
		delete[] arr[i];
	}
	delete[] arr;
}