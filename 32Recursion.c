#include<stdio.h>

int fact();

int main()
{
	int n = 6;
	int factorial = fact(n);
	printf("Factorial of %d is: %d", n, factorial);

	return 0;
}


int fact(n)
{
	int i;
	int f = 1;
	
	if(n != 1)
		return n * fact(n - 1);
	
	return 1;
	
}
