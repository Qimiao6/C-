#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include"main.h"
//ȱʡ����
void test1(int x)//ȱʡ��������ŵ�������������������������ȱʡ����������
{
	using namespace std;
	cout << x << endl;
}
using namespace std;
//��������
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
void tese2()//�������أ������������Ͳ�ͬ
{
	Add(1, 2);//����ʱ�����Ӻ��˶�Ӧ����
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
void tese3()//�������أ���������˳��ͬ
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
	int& a1 = a;//����
	//int& a2;//���ö���ʱ�����ʼ������Ȼ����
	//&a1 = b;//һ����ʼ���������޸������ö���
	int& a2 = a; //һ�����������ж������
	a1 = 30;
	cout << a << endl;
	a2 = 40;
	cout << a << endl;
}
void tese6()
{
	const int a = 20;
	const int& a1 = a;//���ͱ�����ͬ����const������
	const int& tt = 10;//��Ϊ10�ǳ����������ͱ�����const����
}
int main()
{
	//test1();
	//tese2();//�������أ������������Ͳ�ͬ
	//tese3();//�������أ���������˳��ͬ
	//tese4();//�������أ���������������ͬ
	//����
	test5();
	test6();
	return 0;
}