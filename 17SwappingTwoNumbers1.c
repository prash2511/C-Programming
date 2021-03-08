#include<stdio.h>

int main()
{
	int a = 4;
	int b = 7;
	int temp;
	
	printf("Before Swapping- a : %d, b : %d\n",a,b);

	
	temp = a;
	a = b;
	b = temp;
	
	printf("After Swapping- a : %d, b : %d",a,b);
}
