#include<iostream>
using namespace std;
#include<vector>
#include<string>
#include<algorithm>
//1.内置数据类型


class GreatFive
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};
void test01()
{
	vector<int>v;

	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
     vector<int>::iterator it = find_if(v.begin(), v.end(), GreatFive());

	 cout << (*it) << endl;
}


//自定义数据类型
class Person
{
public:
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	string m_name;
	int m_age;
	
};
class  Great20
{
public:
	bool operator()(Person& p)
	{
		return p.m_age > 20;
	}
};
void test02()
{
	vector<Person>v;
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);

	//放入容器
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	vector<Person>::iterator it= find_if(v.begin(), v.end(), Great20());
	cout << "姓名: " << (*it).m_name << " 年龄：" << (*it).m_age << endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
}