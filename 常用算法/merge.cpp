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
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v1.push_back(i + 1);
	}

	vector<int>vTaget;

	//ÌáÇ°¸øÈİÆ÷À©Èİ
	vTaget.resize(v1.size() + v2.size());

	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTaget.begin());
	for_each(vTaget.begin(), vTaget.end(), MyPrint);
	cout << endl;
}

int main()
{
	test01();
	system("pause");
}