#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include"main.h"
//void test()
//{
//	//std::cin >> zgb::bb;
//	std::cout << zgb::bb << std::endl;
//	std::cout << xzg::bb;
//}
void test1()
{
	using std::cin; //使用using将命名空间std中cin成员引入
	using std ::cout;
	using std::endl;
	cout << zgb1::zgb::bb <<endl;//调用嵌套命名空间中的变量bb
	using zgb1::xzg::bb;
	cout << bb;
}
void test2()
{
	using namespace std; //使用using namespace 命名空间名称 将命名空间引入
	using namespace zgb1::xzg;
	//int bb = 0;//仍然遵循局部优先
	cout << bb;
}
void test3()//感受c++
{
	using namespace std;
	cout << "hello world" << endl;
}
void test4(int x = 99)//缺省参数
{
	using namespace std;
	cout << x << endl;
}
#define N 100
void test5(int x = N, int y = 11)
{
	using namespace std;
	cout << x << endl;
	cout << y << endl;

}
void test6(int x)
{
	using namespace std;
	cout << x << endl;

}
int main()
{
	//命名空间
	//test();
	//test1();
	//test2();
	//test3();
	//缺省参数
	//test4(10);
	//test4();
	//test5(10, 2);
	test5(2,11);
	//test6(1);
	return 0;
}