#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>
void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	bool ret = binary_search(v.begin(), v.end(), 9);

	if (ret)
	{
		cout << "找到了" << endl;
	}
	else
	{
		cout << "没有找到" << endl;
	}
}
int main()
{
	test01();
	system("pause");
}