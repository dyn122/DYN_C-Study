#include<iostream>
#include<string>
using namespace std;
const double pi = 3.14;
class circle//Բ��
{
public:
	double ZC()//��Ա����
	{
		return 2 * pi*m_R;
	}
	int m_R;//��Ա����
};

class student
{
public:
	string S_Name;
	int S_Age;
	char S_Sex;
	//��������
	void SetName(string name)
	{
		S_Name = name;
	}
	//����������
	void SetAge(int age)
	{
		S_Age = age;
	}
	//��������
	void SetSex(char sex)
	{
		S_Sex = sex;
	}
	//��ӡ��Ϣ
	void ShowInfo()
	{
		cout << "name:" << S_Name << endl;
		cout << "sex:" << S_Sex << endl;
		cout << "age:" << S_Age << endl;
	}

};
void test8()
{
	circle c1;
	c1.m_R = 10;
	cout << c1.ZC() << endl;
}
void test9()
{
	student stu1;
	stu1.SetName("������");
	stu1.SetAge(25);
	stu1.SetSex('F');
	stu1.ShowInfo();

}
void main06()
{
	test9();
	system("pause");
	EXIT_SUCCESS;
}