#pragma once
namespace zgb//Ϊ��������ͻ����ֱ���������ռ��װ����
{
	int bb = 10;//��������test()
}
namespace xzg//Ϊ��������ͻ����ֱ���������ռ��װ����
{
	int bb = 10000;//��������test()
}

//�����ռ����Ƕ��
namespace zgb1
{
	namespace zgb//��������test1()
	{
		int bb = 10;
	}
	namespace xzg//��������test1()
	{
		int bb = 10000;
	}
}