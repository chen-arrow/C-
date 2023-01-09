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

	vTaget.resize(v1.size() + v2.size());

	//²¢¼¯
	vector<int>::iterator it = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTaget.begin());
	for_each(vTaget.begin(), it, MyPrint);
	cout << endl;
}

int main()
{
	test01();
}