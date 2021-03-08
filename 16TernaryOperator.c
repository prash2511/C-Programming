#include<stdio.h>

int main()
{
	int i = 1;
	int j = 0;
	
	/*
	
	if(i == 1)
		j = 5;
		
	else
		j = 6;
		
	*/
	
	j = i ==1? 5:6;				//Ternary Operator
		
	printf("%d",j);
}
