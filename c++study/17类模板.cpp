#include<iostream>
#include<string>
using namespace std;

template<class nameType,class ageType>
class Person
{
public:
	Person()
	{

	}
	Person(nameType name, ageType age)
	{
		M_name = name;
		M_age = age;
		cout << M_name << "  " << M_age << endl;
	}
	void func17()
	{
		cout << "����Person��func" << endl;
	}
	nameType M_name;
	ageType M_age;
};


template<class R>
class myClass
{
public:
	R obj;
	myClass()
	{
		cout << "myClass�ĳ�ʼ��" << endl;
		obj.func17();
	}
};

void test17()
{
	//**����ֻ������ʾָ������
	Person<string,int> pw("�Ǹ�˭", 10);
	myClass<Person<string, int>> my;
}

void main17()
{
	
	test17();
	system("pause");
	EXIT_SUCCESS;

}