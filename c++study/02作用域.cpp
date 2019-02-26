#include<iostream>
using namespace std;
int ab = 30;
namespace DYN
{
	int ab = 100;
}
void test2()
{
	cout << DYN::ab << endl;
}

int main02()
{
	test2();
	system("pause");
	return 0;
	EXIT_SUCCESS;
}