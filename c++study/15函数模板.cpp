#include<iostream>
using namespace std;
//�����߼��ǳ����Ƶĺ��������Խ����Ͳ�����  �������ͱ�̡���ģ�弼��

template <class T>//����T��һ��ͨ������  �ȼ���template <typename T>
void mySwap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

void test15()
{
	int s = 3;
	int t = 9;
	mySwap(s, t);
	cout << s << "\n" << t << endl;
}

void main15()
{
	test15();
	system("pause");
	EXIT_SUCCESS;

}

//��ͨ�����뺯��ģ�������
/*
��ͨ�������Խ�����ʽ����ת��
ģ�庯��������
*/

//����������أ�����ʹ����ͨ������ǿ�Ƶ���ģ�壬ʹ�ÿղ����б�  ����myPrint<>(a,b);
//�������ģ���ܹ��������õ�ƥ�䣬���ȵ���ģ��

//ģ��ľ����Լ����  ͨ�����廯�Զ�������