#include<iostream>
using namespace std;
void test5()
{
	int a = 12;
	int &b = a;//这里是引用的写法，即a和b用的是同一个内存空间
	cout <<"a="<< a <<"\n"<<"b="<<b<< endl;
	b = 121;
	cout << "a=" << a << "\n" << "b=" << b << endl;
}
//对数组建立引用
void test6()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i;
	}

	int(&prr)[10] = arr;//这里是数组引用的写法
	for (int i = 0; i < 10; i++)
	{
		cout << prr[i] << "  ";
	}
	cout << endl;

}
int main04()
{
	//test3();
	test6();
	system("pause");
	EXIT_SUCCESS;
	return 0;
}
/*
引用的注意事项
1.必须引用一块合法的内存空间
2.不要返归局部变量的引用，因为局部变量在生命周期结束时会被清除掉
3.如果函数的返回是一个引用，则函数可以作为左值
4.不能有NULL引用
5.引用的本质是指针常量
*/