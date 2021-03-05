#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,c;
	
	printf("Enter two values: \n");
	scanf("%d %d", &a, &b);
	c = a + b;
	
	printf("Addition of %d and %d is: %d",a,b,c);
	
	return 0;
}
