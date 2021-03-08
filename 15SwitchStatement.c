#include<stdio.h>

int main()
{
	int i = 4;
	
	switch(i)
	{
		case 0:
			printf("Zero");
			break;
			
		case 1:
			printf("One");
			break;
			
		case 2:
			printf("Two");
			break;
			
		case 3:
			printf("Three");
			break;
			
		case 4:
			printf("Four");
			break;
			
		default:
			printf("Not a valid number");
			break;
	}
}
