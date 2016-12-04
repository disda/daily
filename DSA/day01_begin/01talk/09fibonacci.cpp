/***************************************
*����:fibonacci��ͨ�����ֵݹ�ķ������
*1.ʱ�临�Ӷ�O(2^n)  ��ʵ�����������������
*2.��ô�Ż�:�����㷨���ظ��ĵݹ�ʵ�� ����һ�����ĸ����ռ��ڸ����������֮��,��ʱ��¼�¶�Ӧ�Ľ��
*3.������Դ�ԭ�������,�Զ�����,û����һ������,�����Ȳ������Ƿ��Ѿ������,�Ա�ֱ�Ӳ��ļ�¼��ý��
*	 Ҳ���Դӵݹ������,�Ե����ϵݹ�صõ���������Ľ�  ��̬�滮
*4.�ܽ�
*			a.ͨ���������ǿ���֪���㷨��ƺ������Ҫ��
*	    b.��һ��ʼ�Ķ��ֵݹ�汾��O(2^n)�ĸ��Ӷ�  ���������Եݹ�ʵ�ֵ�O(n)��ʱ�临�ӶȻ�����O(n)�Ķ���ռ� ������ö�̬�滮 �����˶������� O(n)  
*5.�������������:
*6.�˽Ȿ������ADT(abstract data  type) ���⹦�ܽӿڳ��� �����ڲ�ʵ��ԭ��,��������,����Ч������,Ϊ������implementation��ԭ�� ����ģ����  
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