#include <stdio.h> 
int main () 
{
	int a ;
	printf("\nInput number: "); scanf("%d", &a);

	if((a % 5 == 0) && (a % 11 == 0))
		printf("\nNumber is divisible by 5 and 11");
	else
		printf("\nNumber is not divisible by 5 and 11 ");
	return 0 ;  
} 
