#include<iostream>
#include<string>
using namespace std;

//*����ģʽ��ֻ��һ�����������ֻ����һ��ʵ�������������ʽ�ǣ�
//˽�л����캯���Ϳ������캯����ά��һ������ľ�ָ̬�룬����������ָ����г�ʼ��
//�������ṩһ��getInstance�ķ������ṩ��ǰʵ����ָ��
class ChairMan
{
public:
	void  ceshi(string text)
	{
		cout << text << endl;
		count++;
	}
	static ChairMan * getInstance()//�����ṩ�ӿڻ�ȡʵ��ָ��
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
		//cout << "�������" << endl;
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
	cm->ceshi("�����ı�");
//����.��->�����𣬵�ֱ��ʹ�����ʱ����.  ʹ����ĵ�ַ��ʱ����->
	//cout << cm.Instance() << endl;
}
void main12()
{
	test12();
	system("pause");
	EXIT_SUCCESS;

}

//���еĳ�Ա������ϵͳ��ӽ�ȥһ��thisָ�룬������ֻ�洢һ�Σ�����ʱ��thisָ��ָ��ǰ���󣬵���ʱ��thisָ����Ϊ�������뺯���У�this
//ָ����Զָ��ǰ����    this���Խ��������ͻ������
//��ָ����Ϊ���õ�thisָ���ʱ���ǿյģ����Դ�����ִ�е�����Ҫ�õ�thisָ��ĵط��ͻ�ָ��Ϊ�ն�������֮����thisָ���ʱ������á�
//��������constΪ���������������޸�ָ��ָ���ֵ
//�������ܵ�����ͨ���������Ե��ó�����

//��Ԫ������
//ȫ�ֺ������Ѻ���������д��class�У�����ǰ��ע��friend ����һ��ȫ�ֱ��������������Ԫ��������Ԫ�������Է��ʵ�ǰ���˽�г�Ա����
//��һ���࣬�ڵ�ǰ����дfriend class XXX ��������Ϊ��Ԫ�ࡣ
//��Ԫ��ϵ�ǵ���ģ�û�д����ԣ���A������B������C������A������