#include<iostream>
using namespace std;
void test5()
{
	int a = 12;
	int &b = a;//���������õ�д������a��b�õ���ͬһ���ڴ�ռ�
	cout <<"a="<< a <<"\n"<<"b="<<b<< endl;
	b = 121;
	cout << "a=" << a << "\n" << "b=" << b << endl;
}
//�����齨������
void test6()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i;
	}

	int(&prr)[10] = arr;//�������������õ�д��
	for (int i = 0; i < 10; i++)
	{
		cout << prr[i] << "  ";
	}
	cout << endl;

}
int main()
{
	//test3();
	test6();
	system("pause");
	EXIT_SUCCESS;
}