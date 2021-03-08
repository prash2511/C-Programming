#include<stdio.h>

int main()
{
	int a = 4;
	int b = 6;
	
	printf("Before Swapping- a : %d, b : %d\n",a,b);
	
	/*
	
	a = a + b;				// a --> 1 0 0 + 1 1 0    --> 1 0 1 0  --> 10		But 1 bit is getting wasted here
	b = a - b;				// b --> 1 0 1 0 - 1 1 0  --> 1 0 0    --> 4
	a = a - b;				// a --> 1 0 1 0 - 1 0 0  --> 1 1 0    --> 6
	
	*/
	
	//XOR
	a = a ^ b;				// a --> 1 0 0 ^ 1 1 0   --> 0 1 0				
	b = a ^ b;				// b --> 0 1 0 ^ 1 1 0   --> 1 0 0   --> 4
	a = a ^ b;				// a --> 0 1 0 ^ 1 0 0   --> 1 1 0   --> 6
	
	printf("After Swapping- a : %d, b : %d",a,b);

}
