#include<stdio.h>

struct laptop
{
	int id;
	char model[20];
	int price;
};

int main()
{
	struct laptop pavilion, x360;
	
	printf("Enter 1st laptop details: \n");
	printf("Enter Id: ");
	scanf("%d", &pavilion.id);
	printf("Enter Model: ");
	scanf("%s", &pavilion.model);
	printf("Enter Price: ");
	scanf("%d", &pavilion.price);
	
	printf("Enter 2nd laptop details: \n");
	printf("Enter Id: ");
	scanf("%d", &x360.id);
	printf("Enter Model: ");
	scanf("%s", &x360.model);
	printf("Enter Price: ");
	scanf("%d", &x360.price);
	
	printf("Laptop 1 Details: Id : %d, Model : %s, Price : %d\n", pavilion.id, pavilion.model, pavilion.price);

	printf("Laptop 2 Details: Id : %d, Model : %s, Price : %d", x360.id, x360.model, x360.price);

	
	return 0;
}
