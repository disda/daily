/*
1.计算次复杂度  对数的时间复杂度
2.线性时间复杂度
3.多项式时间复杂度算法 
4.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

/*和glibc中内置函数int __builtin_popcount(unsigned int n) */
int countOnes(unsigned int n)
{
	int ones = 0;
	while (n > 0) {
		ones += ( 1 & n );
		n >>= 1; 
	}
	
	return ones;
}

int main(int argc,char* argv[1])
{
	if(argc != 2)
	{	
		cout<<"Usage:"<<argv[0]<<" "<<"num"<<endl;
		return 0;
	}
	//cout<<countOnes(atoi(argv[1]))<<endl;
	cout<<__builtin_popcount(atoi(argv[1]))<<endl;   //gcc 中的这个函数一样有这个效果   
}