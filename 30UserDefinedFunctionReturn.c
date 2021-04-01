#include<stdio.h>

int add(int, int);

int main()
{
	int addition = add(2,4);
	printf("Addition is: %d",addition);
	
	return 0;
}

int add(int i, int j)
{
	int k = i + j;
	return k;
}
