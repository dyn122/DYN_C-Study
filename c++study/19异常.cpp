#include<iostream>
using namespace std;

int myDevide(int a, int b)
{
	if (b == 0)
	{
		//如果异常，抛出int类型的异常
		throw -1;
		
	}
	return a / b;
}

void test19()
{
	int a = 10;
	int b = 0;
	try
	{
		myDevide(a, b);
	}
	catch(...)
	{
		cout << "捕获异常" << endl;
		//如果不想处理这个结果，可以直接写throw;等待上一级调用的处理
	}


}

void main19()
{

	test19();
	system("pause");
	EXIT_SUCCESS;

}

/*
可以自定义异常类，处理int ,double等等，还可以自定义类，用以打印错误信息等
例如有class myExcept,throw myExcept();匿名对象， 当前行代码结束后销毁。
*/

/*
从try开始到throw之前，所有的栈上的对象都会被释放，这个过程叫做栈解旋
*/

/*
C++的标准异常
*/