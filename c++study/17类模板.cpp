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
		cout << "调用Person的func" << endl;
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
		cout << "myClass的初始化" << endl;
		obj.func17();
	}
};

void test17()
{
	//**这里只能用显示指定类型
	Person<string,int> pw("那个谁", 10);
	myClass<Person<string, int>> my;
}

void main17()
{
	
	test17();
	system("pause");
	EXIT_SUCCESS;

}