#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
class GreatFive
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};
void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	GreatFive g1;
	//查找比5大的数
	// GreatFive()是匿名对象
	vector<int>::iterator it= find_if(v.begin(), v.end(), GreatFive());
	if (it == v.end())
	{
		cout << "没用找到" << endl;
	}
	else
	{
		cout << "找到了: " <<(*it) <<endl;
	}
}
int main()
{
	test01();
	system("pause");
	return 0;
}