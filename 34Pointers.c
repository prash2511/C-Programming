#include<stdio.h>

int main()
{
	int i = 5;
	int *p;
	p = &i;
	
	printf("%d \n",p);
	printf("%d \n",&i);
	printf("%d \n",i);
	printf("%d \n",*p);

return 0;
}
