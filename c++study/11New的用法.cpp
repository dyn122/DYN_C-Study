#include<iostream>
using namespace std;
class Person
{
public:
	Person()
	{
		cout << "构造函数调用" << endl;
	}

	~Person()
	{
		cout << "析构函数调用" << endl;
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
类的所有实现共享静态变量static（静态变量）
不建议在初始化函数中初始化类的静态变量，而在类外进行静态变量的初始化
类的静态变量可以直接通过类名直接访问

静态成员函数可以直接通过类名调用，但是静态承成员函数不能访问普通的成员变量，可以访问静态成员变量
静态成员函数也是有权限的

普通成员函数可以访问普通变量，也可以访问静态成员变量
*/