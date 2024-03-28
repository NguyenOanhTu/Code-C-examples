#include <stdio.h> 
int main () 
{
	int a,b ;
	printf("\nInput number 1: "); scanf("%d", &a);
	printf("\nInput number 2: "); scanf("%d", &b);
	
	
	if(a > b)
	 printf("\n%d is maximum  ", a);
	else if (b > a)
	 printf("\n%d is maximum ", b);
	else 
		printf("\nBoth are equal");
	  
	return 0 ;  
} 
