#include<iostream>
#include<string>

//������������ڣ���ʹ���Զ������͵�ʱ�򣬺������ܹ���ȷ����ƥ�䵼�±���
using namespace std;
class Person_16
{
public:
	int age;
	string name;
	Person_16(string n,int a)
	{
		age = a;
		name = n;
		cout << "name:" << name << endl;
		cout << "age:" << age << endl;
	}
};

template <typename T>
bool myjuge(T &a, T &b)
{
	if (a == b)
	{
		return true;
	}
	return false;
}

//���廯�Զ�����������
template<> bool myjuge<Person_16>(Person_16 &a, Person_16 &b)
{
	if (a.age == b.age)
	{
		return true;
	}
	return false;
}

void test16_A()
{
	int a = 10;
	int b = 20;
	cout << myjuge(a, b) << endl;
}

void test16_B()
{
	Person_16 a = Person_16("liming",35);
	Person_16 b = Person_16("wangsan", 35);
	cout << myjuge(a, b) << endl;
}

void main16()
{
	cout << "compare A:" << endl;
	test16_A();
	cout << "compare B:" << endl;
	test16_B();
	system("pause");
	EXIT_SUCCESS;

}