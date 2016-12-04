/***************************************
*问题:fibonacci数通过二分递归的方法求解
*1.时间复杂度O(2^n)  在实际情况根本不可以用
*2.怎么优化:消除算法中重复的递归实例 借助一定量的辅助空间在个子问题求解之后,及时记录下对应的解答
*3.例如可以从原问题出发,自顶向下,没遇到一个问题,都首先查验它是否已经计算过,以便直接查阅记录获得解答
*	 也可以从递归基出发,自低向上递归地得到所有问题的解  动态规划
*4.总结
*			a.通过此题我们可以知道算法设计合理的重要性
*	    b.从一开始的二分递归版本的O(2^n)的复杂度  到利用线性递归实现的O(n)的时间复杂度还用了O(n)的额外空间 最后利用动态规划 仅用了二个变量 O(n)  
*5.抽象的数据类型:
*6.了解本书利用ADT(abstract data  type) 对外功能接口出发 分析内部实现原理,方法技巧,还有效率问题,为了体现implementation的原理 用例模板类  
****************************************/

#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

clock_t start,stop;
double duration;


#define __int64 long long 

__int64 fib(int n)
{
	//printf("fib(%d)\n",n);
	return (2 > n ) ? (__int64)n : fib(n-1) + fib(n - 2);
}

__int64 fib(int n,__int64& prev)
{
	if( 0 == n){
		prev = 1;
		return 0;
	}
	else 
	{
		__int64 prevPrev;
		prev = fib(n-1,prevPrev);
		return prevPrev + prev;
	}
}

__int64 fibI(int n)
{
	__int64 f = 0,g = 1;
	while(0 < n--)
	{
		g += f;
		f = g-f;
	}
	return f;
}

int main(int argc,char* argv[])
{
	__int64 prev;
	start = clock();
	//cout<<fib(atoi(argv[1]),prev)<<endl;
	cout<<fibI(atoi(argv[1]))<<endl;
	stop = clock();
	duration = ((double)(stop - start)) / CLOCKS_PER_SEC;
	cout<<duration<<endl;
	return 0;
}