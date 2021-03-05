#include<stdio.h>

int main()
{
	int a = 12, b = 15, c = 20;
	
	if(a>b && a>c)
	{
		printf("%d is greater",a);
	}
	else if(b>c)
	{
		printf("%d is greater",b);
	}
	else
	{
		printf("%d is greater",c);
	}
	
}
