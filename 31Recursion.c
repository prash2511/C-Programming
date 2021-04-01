//Recursion --> function calling itself

#include<stdio.h>

int fact();

int main()
{
	int n = 5;
	int result = fact(n);
	printf("Factorial of %d is: %d",n,result);

	return 0;
}



int fact(n)
{
	int i;
	int f = 1;
	for(i = 1; i <= n; i++)
	{
		f = f * i;
	}
	return f;
}
