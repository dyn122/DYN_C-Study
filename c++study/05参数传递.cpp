#include<iostream>
using namespace std;
//*1.ֵ���ݣ�����ͨ�ĺ�������
//*2.ָ�봫�ݣ���ַ���ݣ�
//*3.�ô���
//���磺
int a_05 = 1;
int b_05 = 2;

void test7(int &a,int &b)
{
	a = 100;
	b = 200;
}

int main05()
{
	test7(a_05, b_05);
	cout << "a=" << a_05 << "\n" << "b=" << b_05 << endl;
	system("pause");
	EXIT_SUCCESS;
	return 0;
}