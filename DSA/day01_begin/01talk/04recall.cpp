/*
1.���Եݹ�
2.���Ӷȷ�������Ҫ����
	a.���� �������
	b.�ݹ�:�ݹ���� + ���Ʒ���
*/


#include <iostream>
using namespace std;

int sum2(int A[],int n)
{
	if( n == 0)     //�ݹ��
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