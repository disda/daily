/*
1.什么是尾递归 若递归中恰好都是以尾递归的形式存在,则称为尾递归
2.属于尾递归的算法,都可以改写成迭代的方法  
3.
*/

#include <iostream>
using namespace std;

void reverse(int* ,int ,int);
void reverse(int* A,int n){
	reverse(A,0,n-1);
}

void reverse2(int*A ,int low,int hight)
{
next:
	if(low < hight){
		swap(A[low],A[hight]);
		low++,hight--;
		goto next;
	}
}

void reverse(int*A ,int low,int hight)
{
	while(low < hight){
		swap(A[low],A[hight]);
		low++,hight--;
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

int main(int argc,char* argv[])
{
	int A[] = {1,2,3,4,5};
	show(A,5);
	reverse(A,5);
	show(A,5);
			
}