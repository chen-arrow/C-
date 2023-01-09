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

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}

	vector<int>vTaget;

	vTaget.resize(max(v1.size(),v2.size()));

	//½»¼¯
	vector<int>::iterator it = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTaget.begin());
	for_each(vTaget.begin(), it, MyPrint);
	cout << endl;

	it = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTaget.begin());
	for_each(vTaget.begin(), it, MyPrint);
}

int main()
{
	test01();
}