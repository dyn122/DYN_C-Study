#include<iostream>
using namespace std;
//*1.ȫ�ֱ��������ǿ
int a;
//�������뽫����ͨ�����ض���  int a = 10;
//*2.���������ǿ��
//-���������ǿ���������ͣ����ò�������
//*3.����ת�������ǿ
//*4.struct��ǿ���������Ӻ����������ʱ����Բ���struct�ؼ���
//����
struct DYN
{
char name[64];
char sex;
};
DYN xxx;//ֱ�Ӷ���
//*5.��������
//*6.��Ŀ�������ǿ
//���磺
void test3()
{
	int a = 6;
	int b = 3;
	cout << "ret=" << (a > b ? a : b) << endl;//�˴��ķ���ֵc��Ϊһ����ֵ��c++����һ�������������Ҫģ��c�µ�һ��ֵ��������&a
}
//*7.const��ǿ��c�¿�����ָ���ƹ�const�޸�,C++������
//���磺
void test4()
{
	const int t4_a = 10;
	int* t4_p = (int*)&t4_a;
	*t4_p = 100;
	cout << "t4_a=" << t4_a << endl;
	cout << "*p=" << *t4_p << endl;
}
//c�����е�constĬ�����ⲿ���ӣ�C++��Ĭ�����ڲ�����
//c�¿�����ôд  extern const int a;�����������ļ�������ȫ�ֱ���a��C++���У�ʹ��extern���������
//������const������#define����Ϊ�궨���еı�����û�����͵ģ���û��������
int main03()
{
	//test3();
	test4();
	system("pause");
	return 0;
	EXIT_SUCCESS;
}
