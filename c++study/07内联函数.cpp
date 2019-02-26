#include<iostream>
using namespace std;
inline void func();//内联函数声明
inline void func()//内联函数的实现也必须加上inline
{
	cout << "XXX" << endl;
}
/*
内联函数只要是为了解决宏函数的问题
类的成员函数内部默认添加inline关键字，即默认为内联函数，当出现以下情况时，系统将不按照内联函数处理
1.出现任何形式的循环语句
2.不能存在过多的if else判断语句
3.函数体过大
4.进行了取地址操作
*/