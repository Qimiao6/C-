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
	using std::cin; //ʹ��using�������ռ�std��cin��Ա����
	using std ::cout;
	using std::endl;
	cout << zgb1::zgb::bb <<endl;//����Ƕ�������ռ��еı���bb
	using zgb1::xzg::bb;
	cout << bb;
}
void test2()
{
	using namespace std; //ʹ��using namespace �����ռ����� �������ռ�����
	using namespace zgb1::xzg;
	//int bb = 0;//��Ȼ��ѭ�ֲ�����
	cout << bb;
}
void test3()//����c++
{
	using namespace std;
	cout << "hello world" << endl;
}
void test4(int x = 99)//ȱʡ����
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
	//�����ռ�
	//test();
	//test1();
	//test2();
	//test3();
	//ȱʡ����
	//test4(10);
	//test4();
	//test5(10, 2);
	test5(2,11);
	//test6(1);
	return 0;
}