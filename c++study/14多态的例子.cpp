//animal�࣬��������˵����
//cat�࣬��è����˵����
#include<iostream>
using namespace std;
class animal
{
public:
	virtual void speak()//��̬ͨ���麯����ʵ�֣���ʱ����ĺ���Ϊ�麯��
	{
		cout << "������˵��" << endl;
	}
};

class cat :public animal
{
public:
	void speak()
	{
		cout << "è����˵��" << endl;
	}
	void eat()
	{
		cout << "è���ڳ���" << endl;
	}
};

void test14()
{
	animal * cat1 = new cat;//���︸���ָ��ָ��������Ķ��󣬷�����̬
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