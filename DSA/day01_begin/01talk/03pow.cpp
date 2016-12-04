/*
1.此题求解 暴力迭代求解 幂函数算法
2.
*/



#include <iostream>
#include <stdlib.h>
#include <stdio.h>


using namespace std;

long long power2(int n){
	long long pow = 1;
	while(n > 0){
		pow <<= 1;
		n--;
	}
	return pow;
}

int main(int argc,char* argv[])
{
	cout<<"2^"<<argv[1]<<":"<<power2(atoi(argv[1]))<<endl;
}