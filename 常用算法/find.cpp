#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<string>

//查找内置的数据
void test01()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	vector<int>::iterator it = find(v1.begin(), v1.end(), 5);
	if (it == v1.end())
	{
		cout << "没有找到" << endl;
	}
	else
	{
      cout << (*it) << endl;
	}
	
}

class Person
{
public:
	Person( string name,int age)
	{
		this->m_age = age;
		this->m_name = name;
	}
	bool operator==(const Person&p)
	{
		if (this->m_name == p.m_name && this->m_age == p.m_age)
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
//查找自定义类型数据
void test02()
{
	vector<Person>v;
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);

	//放到容器中
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	vector<Person>::iterator it = find(v.begin(), v.end(), p2);
	if (it == v.end())
	{
		cout << "没有找到" << endl;
	}
	else
	{
		cout << "姓名： " << (*it).m_name << " 年龄：" << (*it).m_age << endl;
	}
}
int main()
{
	//test01();
	test02();
	system("pause");
}