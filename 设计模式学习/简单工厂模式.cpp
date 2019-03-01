#include<iostream>
using namespace std;

class Fruit
{
public:
	virtual void getName() = 0;
};

class Apple:public Fruit
{
public:
	virtual void getName()
	{
		cout << "apple..." << endl;
	}
};

class Banana :public Fruit
{
public:
	virtual void getName()
	{
		cout << "banana..." << endl;
	}
};

//写一个工厂
class Factory
{
public:
	Fruit* make(string fruit)
	{
		if (fruit == "apple")
		{
			return new Apple;
		}
		if (fruit == "banana")
		{
			return new Banana;
		}
	}
};

int main()
{
	//建立一个工厂
	Factory * factory = new Factory;
	Fruit * apple = factory->make("apple");
	apple->getName();
	Fruit * banana = factory->make("banana");
	banana->getName();
	system("pause");
	return 0;
}