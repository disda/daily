/*
1.线性递归
2.复杂度分析的主要方法
	a.迭代 级数求和
	b.递归:递归跟踪 + 递推方程
*/


#include <iostream>
using namespace std;

int sum2(int A[],int n)
{
	if( n == 0)     //递归基
		return 0;
	else 
		return sum2(A,n-1)+A[n-1];
}

int sum(int A[],int n)
{
	int total = 0;
	int i = 0;
	while(i < n)
	{
		total = total + A[i++];		 
	}
	return total;
}

int main(int argc,char* argv[])
{
	int A[] = {1,2,3,4,5};
	cout<<sum(A,5)<<endl;
		
}