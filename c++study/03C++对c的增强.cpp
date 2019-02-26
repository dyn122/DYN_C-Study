#include<iostream>
using namespace std;
//*1.全局变量检测增强
int a;
//此条代码将不会通过，重定义  int a = 10;
//*2.函数检测增强：
//-参数检测增强：参数类型，调用参数数量
//*3.类型转换检测增强
//*4.struct增强：可以增加函数，定义的时候可以不加struct关键字
//例如
struct DYN
{
char name[64];
char sex;
};
DYN xxx;//直接定义
//*5.布尔类型
//*6.三目运算符增强
//例如：
void test3()
{
	int a = 6;
	int b = 3;
	cout << "ret=" << (a > b ? a : b) << endl;//此处的返回值c下为一个数值，c++下是一个变量，如果想要模仿c下的一个值，可以用&a
}
//*7.const增强，c下可以用指针绕过const修改,C++不可以
//例如：
void test4()
{
	const int t4_a = 10;
	int* t4_p = (int*)&t4_a;
	*t4_p = 100;
	cout << "t4_a=" << t4_a << endl;
	cout << "*p=" << *t4_p << endl;
}
//c语言中的const默认是外部链接，C++下默认是内部链接
//c下可以这么写  extern const int a;即可在其他文件中引用全局变量a，C++则不行，使用extern提高作用域
//尽量用const来代替#define，因为宏定义中的变量是没有类型的，且没有作用域
int main03()
{
	//test3();
	test4();
	system("pause");
	return 0;
	EXIT_SUCCESS;
}
