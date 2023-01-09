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
	
	for (int i = 0; i <= 100; i++)
	{
		v1.push_back(i);
	}

	int total = accumulate(v1.begin(), v1.end(), 0);
	cout << "total= " << total << endl;
	
}

int main()
{
	test01();
}