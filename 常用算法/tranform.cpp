#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
class Tranform
{
public:
	int operator()(int val)
	{
		return val;
	}
};
class print02
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}

};
void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	vector<int>vTarget;
	vTarget.resize(v.size());

	transform(v.begin(), v.end(), vTarget.begin(), Tranform());

	for_each(vTarget.begin(), vTarget.end(), print02());
	cout << endl;
}
int main()
{
	test01();
	system("pause");
}