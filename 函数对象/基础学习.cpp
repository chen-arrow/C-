#include<iostream>
using namespace std;
class MyAdd
{
public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}
};
void test01()
{
	MyAdd myAdd;
	cout << myAdd(10, 10) << endl;
	cout << MyAdd()(10,10) << endl;  //匿名
}
class MyPrint
{
public:
	MyPrint()
	{
		this->count = 0;
	}
	void operator()(string test)
	{
		cout << test << endl;
		this->count++;
	}
	//自己的状态
	 int count;
};
void test02()
{
	MyPrint myprint;
	myprint("hello wrold");
	myprint("hello wrold");
	MyPrint()("hello wrold");
	MyPrint()("hello wrold");
	MyPrint()("hello wrold");
	cout << myprint.count << endl;
}
void doprint(MyPrint& mc, string test)
{
	mc(test);
}
void test03()
{
	MyPrint myprint;
	doprint(myprint, "hello c++");
}
int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
}