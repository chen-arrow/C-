#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<numeric>
void MyPrint(int val)
{
	cout << val << " ";
}
void test01()
{
	vector<int>v1;
	vector<int>v2;
	v1.resize(10);

	fill(v1.begin(), v1.end(), 100);

	for_each(v1.begin(), v1.end(), MyPrint);
}

int main()
{
	test01();
}