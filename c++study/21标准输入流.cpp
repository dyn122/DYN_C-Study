#include<iostream>
#include<string>
using namespace std;

//cin.get
//cin.getline
//cin.ignore
//cin.peek
//cin.putback
void test21()//��ȡһ���ַ�
{
	//����as����һ����a,�ڶ�����s,�������ûس��������Ĵεȴ��û�����
	char c = cin.get();
	cout << c << endl;
	c = cin.get();
	cout << c << endl;
	c = cin.get();
	cout << c << endl;
	c = cin.get();
}

void test21_B()//��ȡ�ַ��������������з�
{
	char arr[1024];
	cin.get(arr, 1024);
	cout << arr << endl;
}

void test21_C()//getline��ȡ�ַ��������ջ��з�������
{
	char arr[1024];
	cin.getline(arr, 1024);
	cout << arr << endl;
}

void test21_D()//cin.ignore��ȡ�ַ��������ջ��з�������
{
	char arr[1024];
	cin.ignore(2);//���Ե�ǰ���2���ַ�����������ʱ����1���ַ�
	cin.getline(arr, 1024);
	cout << arr << endl;
}

void test21_E()//cin.peek͵����Żػ�����
{
	char arr[1024];
	char a = cin.peek();
	cout << a << endl;
	cin.getline(arr, 1024);
	cout << arr << endl;
}

void test21_F()//���߲��Ż�
{
	char c = cin.get();
	cin.putback(c);//���߲��Ż�
}


//�������ж��û�����������ֻ����ַ���
void test21_G()
{
	cout << "�����룺";
	char a = cin.peek();
	//cout << (int)a << endl;
	if (a < '9'&& a>'0')
	{
		cout <<"�������������" << endl;
		return;
	}
	cout << "����������ַ���" << endl;
}

//�������ж��û�������������Ƿ���1-10֮��
void test21_H()
{
	int num;
	char arr[10];
	cout << "������1-10֮�䣺" << endl;
	while (true)
	{
		cin >> num;
		cout << "��ǰ��num:" <<num<< endl;
		if (num <= 10 && num > 0)
		{
			cout << "��������ȷ" << endl;
			break;
		}
		//cout << "����������" << endl;
		cin.clear();//���ñ�־λ
		//cin.ignore(10);//���Ի���������������
		//cin.sync();
		cout << cin.fail() << endl;
		//cin>>arr;
		//cout << arr << endl;
		//cout << "����������" << endl;

		//�̳��е���ջ�������д������ͨ�ã�����ʹ��ģ�庯���ķ�ʽ����
	}
	
}


void main()
{

	test21_H();
	system("pause");
	EXIT_SUCCESS;

}