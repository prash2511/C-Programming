#include<stdio.h>

int main()
{
	int a = 14;					// 14 --> 1 1 1 0
	
	int result = a << 2;		// 14 << 2 --> 1 1 1 0 0 0  --> 56
	printf("%d \n", result);
	
	result = a >> 2;
	printf("%d", result);		// 14 >> 2  --> 0 0 1 1  --> 3
}
