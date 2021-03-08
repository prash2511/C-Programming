#include<stdio.h>

int main()
{
	int a = 5;
	int b = 6;
	
	printf("Before Swapping- a : %d, b : %d\n",a,b);
	
	b = a + b - (a = b);
	
	printf("After Swapping- a : %d, b : %d",a,b);
}
