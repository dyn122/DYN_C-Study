#include<iostream>
#include<string>
#include<exception>
using namespace std;

class Person_20
{
public:
	Person_20(string name,int age)
	{
		if (age < 0 || age>100)
		{
			throw out_of_range("����Խ����");
		}
	}
	string name_20;
	int age_20;
};