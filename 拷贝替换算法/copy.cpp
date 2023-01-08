#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	vector<int>v2;
	v2.resize(v.size());
}
int main()
{
	test01();
}