/*
1.���� = ��Ϣ����  
2.T(n)=��������ļ���ɱ�  �ڹ�ģ��ͬ������ʵ����,ֻ��ע��ɱ���
3.RAM�㷨?
4.��������
5.����T(n) ��O(n)֮��Ĺ�ϵ


ð������
*/

#include <iostream>

using namespace std;


void bubblesort1A(int A[],int n)     //debug�汾
{
	bool   sorted = false;
	while(!sorted){
		sorted = true;      //�ٶ��Ѿ��ź�����
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