/*
1.计算 = 信息处理  
2.T(n)=计算所需的计算成本  在规模相同的所有实例中,只关注最坏成本的
3.RAM算法?
4.渐进分析
5.明白T(n) 和O(n)之间的关系


冒泡排序
*/

#include <iostream>

using namespace std;


void bubblesort1A(int A[],int n)     //debug版本
{
	bool   sorted = false;
	while(!sorted){
		sorted = true;      //假定已经排好序了
		for( int i = 0;i < n;i++){
			if(A[i-1] > A[i]){
				swap(A[i-1] , A[i]);
				sorted = false;
			}
		}
		n--;
	}
}

void  bubblesort(int A[],int n)
{
	for(bool sorted = false;sorted = !sorted;n--)
	{
		for(int i = 1;i < n;i++)
		{
			if(A[i-1] > A[i])
				swap(A[i-1],A[i]);
				sorted = false;
		}
	}
}

void show(int A[],int n)
{
	for(int i = 0;i < n;i++)
	{
		cout<<A[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	int A[] = {5,2,3,4,1};
	show(A,5);
	//bubblesort1A(A,5);
	bubblesort(A,5);
	show(A,5);
}