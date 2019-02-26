#include<iostream>
#include<string>
using namespace std;
const double pi = 3.14;
class circle//圆类
{
public:
	double ZC()//成员函数
	{
		return 2 * pi*m_R;
	}
	int m_R;//成员属性
};

class student
{
public:
	string S_Name;
	int S_Age;
	char S_Sex;
	//设置姓名
	void SetName(string name)
	{
		S_Name = name;
	}
	//设置姓年龄
	void SetAge(int age)
	{
		S_Age = age;
	}
	//设置姓名
	void SetSex(char sex)
	{
		S_Sex = sex;
	}
	//打印信息
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
	stu1.SetName("张三丰");
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