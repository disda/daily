/*
1.∂‡œÚµ›πÈ
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define __int64 long long

using namespace std;


inline __int64 sqrt(__int64 a)
{
	return a*a;
} 

__int64 power2(int n){
	if(n == 0 )
		return 1;
	else 
		return (n & 1) ? sqrt( power2( n>>1 ) ) << 1 : sqrt(power2( n>>1 )); 
}


int main(int argc,char* argv[])
{
	if(argc != 2)
	{
		cout<<"please input argument!"<<endl;
		return 0;
	}
	cout<<power2(atoi(argv[1]))<<endl;
	return 0;
}