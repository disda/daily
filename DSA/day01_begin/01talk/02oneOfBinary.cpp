/*
1.����θ��Ӷ�  ������ʱ�临�Ӷ�
2.����ʱ�临�Ӷ�
3.����ʽʱ�临�Ӷ��㷨 
4.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

/*��glibc�����ú���int __builtin_popcount(unsigned int n) */
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
	cout<<__builtin_popcount(atoi(argv[1]))<<endl;   //gcc �е��������һ�������Ч��   
}