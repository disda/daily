//

#include <iostream>
using namespace std;

void reverse(int* ,int ,int);
void reverse(int* A,int n){
	reverse(A,0,n-1);
}

void reverse(int*A ,int low,int hight)
{
	if(low < hight){
		swap(A[low],A[hight]);
		reverse(A,low+1,hight-1);
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