#include<iostream>
using namespace std;
//*1.值传递：最普通的函数传递
//*2.指针传递（地址传递）
//*3.用传递
//例如：
int a_05 = 1;
int b_05 = 2;

void test7(int &a,int &b)
{
	a = 100;
	b = 200;
}

int main05()
{
	test7(a_05, b_05);
	cout << "a=" << a_05 << "\n" << "b=" << b_05 << endl;
	system("pause");
	EXIT_SUCCESS;
	return 0;
}