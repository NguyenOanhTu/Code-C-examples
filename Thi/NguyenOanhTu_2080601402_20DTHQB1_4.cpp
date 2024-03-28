#include <stdio.h>
struct customer
{
	char firstName[20];
	char lastName[20];
	char code[10];
	float salary;
};

int main()
{
	
	struct customer ctm_a;
	printf("input firstName: ");
	scanf("%s", &ctm_a.firstName);
	printf("\ninput lastName: ");
	scanf("%s", &ctm_a.lastName);
	printf("\ninput code: ");
	scanf("%s", &ctm_a.code);
	printf("\ninput salary: ");
	scanf("%f", &ctm_a.salary);

	printf("\nOutput firstName: %s", ctm_a.firstName);
	printf("\nOutput lastName: %s", ctm_a.lastName);
	printf("\nOutput code: %s", ctm_a.code);
	printf("\nOutput salary: $%f", ctm_a.salary);
	
	return 0;
}

