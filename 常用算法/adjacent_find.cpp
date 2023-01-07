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
		cout << "，没有找到相邻元素" << endl;
	}
	else
	{
		cout << "找到了相邻元素: " << (*it) << endl;
	}
}
int main()
{
	test01();
	system("pause");
}