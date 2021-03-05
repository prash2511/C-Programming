#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 1;
	i++;                  // Post Increment ---> first fetch the value and increment it after using
	printf("%d \n", i);
	
	++i;                  // Pre Increment ---> first increment the value and then use it
	printf("%d \n", i);
	
	
	
	i--;                  // Post Decrement ---> first fetch the value and decrement it after using
	printf("%d \n", i);
	
	--i;                  // Pre Decrement ---> first decrement the value and then use it
	printf("%d \n", i);	
	
	
	return 0;
}
