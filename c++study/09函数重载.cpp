#include<iostream>
using namespace std;

//c++中函数的名称可以重复
//必须在同一个作用域下，函数名相同
//函数的参数个数、类型或顺序不同
//函数的返回值不同不能作为重载的条件
void func3()
{
	//code
	cout << "无参数" << endl;
}
void func3(int a)
{
	//code
	cout << "有参数" << endl;
}
//当函数重载遇到默认参数时注意避免二义性的问题
//const也可以作为重载的条件

//C++中函数是可以发生重载的，编译器会把这个函数名偷偷改变
//C++中想要调用c的函数，要写这种结构  extern "C" void show();