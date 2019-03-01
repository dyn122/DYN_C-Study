#include<iostream>
using namespace std;
//类型逻辑非常相似的函数，可以将类型参数化  叫做泛型编程——模板技术

template <class T>//这里T是一个通用类型  等价于template <typename T>
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

//普通函数与函数模板的区别
/*
普通函数可以进行隐式类型转换
模板函数不允许
*/

//如果出现重载，优先使用普通函数，强制调用模板，使用空参数列表  例如myPrint<>(a,b);
//如果函数模板能够产生更好的匹配，优先调用模板

//模板的局限性及解决  通过具体化自定义类型