#include<iostream>
using namespace std;
class Person
{
public:
	Person()
	{
		cout << "���캯������" << endl;
	}

	~Person()
	{
		cout << "������������" << endl;
	}
};

void test11()
{
	Person * p = new Person;
	delete p;
}
void main11()
{
	test11();
	system("pause");
	EXIT_SUCCESS;

}
/*
�������ʵ�ֹ���̬����static����̬������
�������ڳ�ʼ�������г�ʼ����ľ�̬����������������о�̬�����ĳ�ʼ��
��ľ�̬��������ֱ��ͨ������ֱ�ӷ���

��̬��Ա��������ֱ��ͨ���������ã����Ǿ�̬�г�Ա�������ܷ�����ͨ�ĳ�Ա���������Է��ʾ�̬��Ա����
��̬��Ա����Ҳ����Ȩ�޵�

��ͨ��Ա�������Է�����ͨ������Ҳ���Է��ʾ�̬��Ա����
*/