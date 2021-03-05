#include<stdio.h>

int main()
{
	int result;
	
	// && -> Logical AND
	
	result = 3 != 5 && 3 > 1;			// True -> 1
	printf("%d \n",result);
	
	result = 3 == 5 && 3 > 1;			// False -> 0
	printf("%d \n",result);
	
	// || -> Logical OR
	
	result = 3 == 5 || 3 > 1;			// True -> 1
	printf("%d \n",result);
	
	result = 3 == 5 || 3 > 6;			// False -> 0
	printf("%d \n",result);	
	
}
