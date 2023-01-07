#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include"main.h"
//缺省参数
void test1(int x)//缺省参数建议放到声明，如果定义和声明均给定缺省参数将报错
{
	using namespace std;
	cout << x << endl;
}
using namespace std;
//函数重载
int Add(int x, int y)
{
	cout << "Add(int x, int y)" << endl;
	return x + y;
}
double Add(double x, double y)
{
	cout << "Add(double x, double y)" << endl;
	return x + y;
}
void tese2()//函数重载，函数参数类型不同
{
	Add(1, 2);//编译时就链接好了对应函数
	Add(1.3, 1.5);
}
int Add(char x, int y)
{
	cout << "Add(char x, int y)" << endl;
	return x;
}
int Add( int y, char x)
{
	cout << "Add( int y, char x)" << endl;
	return y;
}
void tese3()//函数重载，函数参数顺序不同
{
	Add('a', 1);
	Add(1, 'a');
}
int Add(int x)
{
	cout << "Add(int x)" << endl;
	return x;
}
void tese4()
{
	Add(1);
	Add(2, 4);
}
void test5()
{
	int b = 1;
	int a = 10;
	int& a1 = a;//引用
	//int& a2;//引用定义时必须初始化，不然报错
	//&a1 = b;//一旦初始化，不能修改其引用对象
	int& a2 = a; //一个变量可以有多个引用
	a1 = 30;
	cout << a << endl;
	a2 = 40;
	cout << a << endl;
}
void tese6()
{
	const int a = 20;
	const int& a1 = a;//类型必须相同少了const都不行
	const int& tt = 10;//因为10是常量所以类型必须有const才行
}
int main()
{
	//test1();
	//tese2();//函数重载，函数参数类型不同
	//tese3();//函数重载，函数参数顺序不同
	//tese4();//函数重载，函数参数个数不同
	//引用
	test5();
	test6();
	return 0;
}