/*�̳е�д��*/
class A     //���еĸ���A
{
public:
	int A_a;
protected:
	int A_b;
private:
	int A_c;
};
//*���м̳�
class B :public A
{
	//code
};
/*
��ʱ�ļ̳��൱��
class B 
{
public:
	int A_a;
protected:
	int A_b;
};
*/
//*�����̳�
class C :protected A
{
	//code
};
/*
��ʱ�ļ̳��൱��
class B
{
protected:
	int A_b;
	int A_a;
};
*/

//*˽�м̳�
class D : private A
{
	//code
};
/*
��ʱ�ļ̳��൱��
class D
{
private:
	int A_b;
	int A_a;
};
*/
//day06  07��ļ̳з�ʽ