/********************************************
*����:���ֵݹ�	
*1.ʲô�Ƕ��ֵݹ�:�ֶ���֮��˼��  
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

int sum(int A[],int n)       //����ͳһ�ӿ�
{
	sum(A,0,n-1);
}


int main(int argc,char* argv[])
{
	int A[] = {1,2,3,4,5};
	cout<<sum(A,5)<<endl;
		
}