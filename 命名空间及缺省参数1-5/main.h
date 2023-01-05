#pragma once
namespace zgb//为避免名冲突，咱直接用命名空间封装起来
{
	int bb = 10;//测试样例test()
}
namespace xzg//为避免名冲突，咱直接用命名空间封装起来
{
	int bb = 10000;//测试样例test()
}

//命名空间可以嵌套
namespace zgb1
{
	namespace zgb//测试样例test1()
	{
		int bb = 10;
	}
	namespace xzg//测试样例test1()
	{
		int bb = 10000;
	}
}