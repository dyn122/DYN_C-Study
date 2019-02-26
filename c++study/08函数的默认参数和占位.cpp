#include<iostream>
using namespace std;

void func1(int a = 10, int b = 20)//这里的10,20就是函数的默认参数
{
	//code
}
//如果有一个位置有了默认参数，那么从这个位置开始，后面的位置都必须有默认参数
//传入参数，如果有默认值就用传入，没有就用默认参数
//函数的占位参数
void func2(int a, int)
{
	//code
}
//有了这个占位参数，调用函数时必须要传入一个占位参数
//占位参数可以有默认值，例如int =1