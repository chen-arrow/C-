#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
//ͳ��������������
void test01()
{
	vector<int>v;
	v.push_back(0);
	v.push_back(2);
	v.push_back(0);
	v.push_back(3);
	v.push_back(1);
	v.push_back(4);
	v.push_back(3);
	v.push_back(3);
	int num = count(v.begin(), v.end(), 3);
	cout << "һ���ж�������" << num << endl;

}
//ͳ���Զ�������
class Person
{
public:
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	bool operator==(const Person &p)
	{
		if (this->m_age == p.m_age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	int m_age;
	string m_name;
};
void test02()
{
	vector<Person>v;
	Person p1("����", 25);
	Person p2("����", 35);
	Person p3("�ŷ�", 35);
	Person p4("����", 30);
	Person p5("�ܲ�", 40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	Person P("�����", 35);

	int num = count(v.begin(), v.end(), P);
	cout << "λ��Ϊ�� " << num << endl;
}
int main()
{

	//test01();
	test02();
	system("pause");
}