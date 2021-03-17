#include<stdio.h>

int main()
{
	int i,j;
		
	int d[3][4] = 
	{
		{1,2,3,4},
		{5,6,7,8},
		{3,5,7,9}
	};
	
	
    for(i = 0; i <= 2; i++)
    {
    	for(j = 0; j <= 3; j++)
    	{
    		printf("%d ",d[i][j]);
		}
		
		printf("\n");
	}
	
	
	
	
return 0;
}
