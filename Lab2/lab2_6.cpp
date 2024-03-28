#include <stdio.h> 
int main () 
{
	double a;
	printf("\nEnter a number: "); scanf("%lf", &a);
	
	if(a <= 0.0)
	{
		if(a == 0.0)
			printf("%.2lf is a zero number", a);
		else
			printf("%.2lf is a negative number", a);
	}
	else
		printf("%2.lf is a positive number ", a);
		
			
	  
	return 0 ;  
} 
