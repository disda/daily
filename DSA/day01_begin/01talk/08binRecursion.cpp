/********************************************
*问题:二分递归	
*1.什么是二分递归:分而治之的思想  
*2.
*
*********************************************/

#include <iostream>
using namespace std;

int sum(int A[],int low,int hight)
{
	if(low == hight )
		return A[low];
	else 
	{
		int mid = (low + hight ) >> 1;
		return sum(A,low,mid) + sum(A,mid+1,hight);
	}
}

int sum(int A[],int n)       //重载统一接口
{
	sum(A,0,n-1);
}


int main(int argc,char* argv[])
{
	int A[] = {1,2,3,4,5};
	cout<<sum(A,5)<<endl;
		
}