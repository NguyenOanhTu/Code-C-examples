#include <stdio.h> 
int main () 
{
	char id[10];
	int hour;
	float value, salary;
	printf("Input the Employees ID(Max. 10 chars):");
	scanf("%s", &id);
	printf("\nInput the working hrs: ");
	scanf("%d",&hour );
	printf("\nSalary amount/hr: ");
	scanf("%f", &value);
	
	salary = value * hour;
	printf("\nEmployees ID =%s \n Salary = %.2f$ \n", id,salary);
	
	return 0 ;  
} 
