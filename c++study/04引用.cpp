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
int main04()
{
	//test3();
	test6();
	system("pause");
	EXIT_SUCCESS;
	return 0;
}
/*
���õ�ע������
1.��������һ��Ϸ����ڴ�ռ�
2.��Ҫ����ֲ����������ã���Ϊ�ֲ��������������ڽ���ʱ�ᱻ�����
3.��������ķ�����һ�����ã�����������Ϊ��ֵ
4.������NULL����
5.���õı�����ָ�볣��
*/