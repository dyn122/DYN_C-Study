/*继承的写法*/
class A     //已有的父类A
{
public:
	int A_a;
protected:
	int A_b;
private:
	int A_c;
};
//*公有继承
class B :public A
{
	//code
};
/*
此时的继承相当于
class B 
{
public:
	int A_a;
protected:
	int A_b;
};
*/
//*保护继承
class C :protected A
{
	//code
};
/*
此时的继承相当于
class B
{
protected:
	int A_b;
	int A_a;
};
*/

//*私有继承
class D : private A
{
	//code
};
/*
此时的继承相当于
class D
{
private:
	int A_b;
	int A_a;
};
*/
//day06  07类的继承方式