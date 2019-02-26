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
int main()
{
	//test3();
	test6();
	system("pause");
	EXIT_SUCCESS;
}