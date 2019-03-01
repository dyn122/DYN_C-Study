//animal类，“动物在说话”
//cat类，“猫咪在说话”
#include<iostream>
using namespace std;
class animal
{
public:
	virtual void speak()//多态通过虚函数来实现，此时父类的函数为虚函数
	{
		cout << "动物在说话" << endl;
	}
};

class cat :public animal
{
public:
	void speak()
	{
		cout << "猫咪在说话" << endl;
	}
	void eat()
	{
		cout << "猫咪在吃鱼" << endl;
	}
};

void test14()
{
	animal * cat1 = new cat;//这里父类的指针指向了子类的对象，发生多态
	cat1->speak();
	//cat1->eat();
	//int*(cat1)
}
void main14()
{
	test14();
	system("pause");
	EXIT_SUCCESS;

}