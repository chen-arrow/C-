#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;


class Great20
{
public:
	bool operator()(int val)
	{
	return 	val > 20;
	}
};
void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);
	v.push_back(40);

	int num = count_if(v.begin(), v.end(), Great20());
	cout << "����20�ģ�" << num << endl;
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
	int m_age;
	string m_name;
};

class mAge
{
public:
	bool operator()(const Person&P)
	{
		return P.m_age > 20;
	}
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

	int num = count_if(v.begin(), v.end(), mAge());
	cout << num << endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
}