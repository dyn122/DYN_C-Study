#include<iostream>
using namespace std;

int myDevide(int a, int b)
{
	if (b == 0)
	{
		//����쳣���׳�int���͵��쳣
		throw -1;
		
	}
	return a / b;
}

void test19()
{
	int a = 10;
	int b = 0;
	try
	{
		myDevide(a, b);
	}
	catch(...)
	{
		cout << "�����쳣" << endl;
		//������봦��������������ֱ��дthrow;�ȴ���һ�����õĴ���
	}


}

void main19()
{

	test19();
	system("pause");
	EXIT_SUCCESS;

}

/*
�����Զ����쳣�࣬����int ,double�ȵȣ��������Զ����࣬���Դ�ӡ������Ϣ��
������class myExcept,throw myExcept();�������� ��ǰ�д�����������١�
*/

/*
��try��ʼ��throw֮ǰ�����е�ջ�ϵĶ��󶼻ᱻ�ͷţ�������̽���ջ����
*/

/*
C++�ı�׼�쳣
*/