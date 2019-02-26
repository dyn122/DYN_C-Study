#include<iostream>
using namespace std;
//  ::全局变量，例如
int as = 200;
void test1()
{
	int a = 10;
	cout << a  << endl;
	cout << ::as << endl;


}
int main01()
{
	test1();
	cout << "hello world !"    <<  "100"<< endl;
	system("pause");
	return EXIT_SUCCESS;
}