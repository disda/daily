#include <iostream>

using namespace std;

void max2(int A[],int low,int high,int* x1, int* x2)
{
	int i = 0;
	for(i = low + 1,*x1 = low;i < high;i++)
		if(A[*x1] < A[i])
			*x1 = i;
	for(i = low + 1,*x2 = low;i < *x1;i++)
		if(A[*x2] < A[i])
			*x2 = i;
	for(i = *x1 + 1;i < high;i++)
		if(A[*x1] < A[i])
			*x2 = i;	  	
			
}

int main(int argc,char* argv[])
{
	int A[] = {55,455,5,9,5};
	int x1 = 0,x2 = 0;
	max2(A,0,5,&x1,&x2);
	cout<<A[x1]<<" "<<A[x2]<<endl;
}