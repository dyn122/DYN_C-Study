#include<iostream>
#include<string>
using namespace std;

//*单例模式即只有一个类且这个类只能有一个实例，具体操作方式是：
//私有化构造函数和拷贝构造函数，维护一个对象的静态指针，在类外对这个指针进行初始化
//对类外提供一个getInstance的方法来提供当前实例的指针
class ChairMan
{
public:
	void  ceshi(string text)
	{
		cout << text << endl;
		count++;
	}
	static ChairMan * getInstance()//这里提供接口获取实例指针
	{
		return singleMan;
	}
	void cishu()
	{
		cout << count << endl;
	}
private:
	ChairMan()
	{
		//cout << "构造调用" << endl;
		count = 0;
	}
	ChairMan(ChairMan* &b)
	{
		//code
	}

	static ChairMan * singleMan;
	int count;

};
ChairMan* ChairMan::singleMan = new ChairMan;
void test12()
{
	ChairMan * cm=ChairMan::getInstance();
	cm->ceshi("测试文本");
//关于.和->的区别，当直接使用类的时候，用.  使用类的地址的时候用->
	//cout << cm.Instance() << endl;
}
void main12()
{
	test12();
	system("pause");
	EXIT_SUCCESS;

}

//所有的成员函数，系统会加进去一个this指针，函数体只存储一次，调用时，this指针指向当前对象，调用时，this指针作为参数传入函数中，this
//指针永远指向当前对象    this可以解决命名冲突的问题
//空指针因为会用到this指针的时候是空的，所以代码在执行到类需要用到this指针的地方就会指向为空而报错，反之不用this指针的时候可以用。
//函数体后加const为常函数，不允许修改指针指向的值
//常对象不能调用普通函数，可以调用常函数

//友元函数：
//全局函数，把函数的声明写到class中，并在前面注明friend 即把一个全局变量当做当类的友元函数，友元函数可以访问当前类的私有成员变量
//另一个类，在当前类中写friend class XXX ，即可作为友元类。
//友元关系是单向的，没有传递性，即A的朋友B的朋友C，不是A的朋友