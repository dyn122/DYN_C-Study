#include<iostream>
#include<string>
using namespace std;

//cin.get
//cin.getline
//cin.ignore
//cin.peek
//cin.putback
void test21()//获取一个字符
{
	//输入as，第一次拿a,第二次拿s,第三次拿回车符，第四次等待用户输入
	char c = cin.get();
	cout << c << endl;
	c = cin.get();
	cout << c << endl;
	c = cin.get();
	cout << c << endl;
	c = cin.get();
}

void test21_B()//获取字符串，会遗留换行符
{
	char arr[1024];
	cin.get(arr, 1024);
	cout << arr << endl;
}

void test21_C()//getline获取字符串，接收换行符并丢弃
{
	char arr[1024];
	cin.getline(arr, 1024);
	cout << arr << endl;
}

void test21_D()//cin.ignore获取字符串，接收换行符并丢弃
{
	char arr[1024];
	cin.ignore(2);//忽略掉前面的2个字符，不带参数时忽略1个字符
	cin.getline(arr, 1024);
	cout << arr << endl;
}

void test21_E()//cin.peek偷看后放回缓冲区
{
	char arr[1024];
	char a = cin.peek();
	cout << a << endl;
	cin.getline(arr, 1024);
	cout << arr << endl;
}

void test21_F()//拿走并放回
{
	char c = cin.get();
	cin.putback(c);//拿走并放回
}


//案例，判断用户输入的是数字还是字符串
void test21_G()
{
	cout << "请输入：";
	char a = cin.peek();
	//cout << (int)a << endl;
	if (a < '9'&& a>'0')
	{
		cout <<"您输入的是数字" << endl;
		return;
	}
	cout << "您输入的是字符串" << endl;
}

//案例，判断用户输入的是数字是否在1-10之间
void test21_H()
{
	int num;
	char arr[10];
	cout << "请输入1-10之间：" << endl;
	while (true)
	{
		cin >> num;
		cout << "当前的num:" <<num<< endl;
		if (num <= 10 && num > 0)
		{
			cout << "您输入正确" << endl;
			break;
		}
		//cout << "您输入有误" << endl;
		cin.clear();//重置标志位
		//cin.ignore(10);//忽略缓冲区的所有内容
		//cin.sync();
		cout << cin.fail() << endl;
		//cin>>arr;
		//cout << arr << endl;
		//cout << "您输入有误" << endl;

		//教程中的晴空缓冲区的写法并不通用，建议使用模板函数的方式接收
	}
	
}


void main()
{

	test21_H();
	system("pause");
	EXIT_SUCCESS;

}