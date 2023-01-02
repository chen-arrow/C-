#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<functional>
void test01()
{
	vector<bool>v;
	v.push_back(true);
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//先创立一个v2容器然后进行取反
	vector<bool>v1;
	v1.resize(v.size());
	transform(v.begin(), v.end(), v1.begin(), logical_not<bool>());
	for (vector<bool>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		cout << *it << " ";
	}
}
int main()
{
	test01();
	system("pause");
}