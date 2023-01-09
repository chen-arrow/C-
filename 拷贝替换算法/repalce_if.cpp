#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void MyPrint(int val)
{
	cout << val << " ";
}
class Great30
{
public:
	bool operator()(int val)
	{
		return val > 30;
	}
};
void test01()
{
	vector<int>v;
	
	v.push_back(10);
	v.push_back(40);
	v.push_back(20);
	v.push_back(40);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(30);

	for_each(v.begin(), v.end(), MyPrint);
	cout << endl;

	  replace_if(v.begin(), v.end(), Great30(),3000);

	  for_each(v.begin(), v.end(), MyPrint);
	  cout << endl;
}

int main()
{
	test01();
}