#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>
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

	vector<int>::iterator it = adjacent_find(v.begin(), v.end());
	if (it == v.end())
	{
		cout << "��û���ҵ�����Ԫ��" << endl;
	}
	else
	{
		cout << "�ҵ�������Ԫ��: " << (*it) << endl;
	}
}
int main()
{
	test01();
	system("pause");
}