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
	v.push_back(10);
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);
	v.push_back(50);
	v.push_back(70);
	v.push_back(80);
	sort(v.begin(), v.end());

	for_each(v.begin(), v.end(), MyPrint);
	cout << endl;

	sort(v.begin(), v.end(), greater<int>());
	for_each(v.begin(), v.end(), MyPrint);
	cout << endl;
}

int main()
{
	test01();
	system("pause");
}