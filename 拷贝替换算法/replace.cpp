#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void MyPrint(int val)
{
	cout << val << " ";
}
void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	replace(v.begin(), v.end(), 2, 2000);
	for_each(v.begin(), v.end(), MyPrint);
	cout << endl;
}

int main()
{
	test01();
}