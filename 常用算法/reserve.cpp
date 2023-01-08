#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

void MyPrint(int val)
{
	cout << val << " ";
}
void test01()
{
	vector<int>v;

	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);

	for_each(v.begin(), v.end(), MyPrint);
	cout << endl;

	reverse(v.begin(), v.end());
	for_each(v.begin(), v.end(), MyPrint);
	cout << endl;
}
int main()
{
	test01();
}