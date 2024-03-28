#include <stdio.h> 
int main () 
{
	int a,b,c,max ;
	printf("\nInput number 1: "); scanf("%d", &a);
	printf("\nInput number 2: "); scanf("%d", &b);
	printf("\nInput number 3: "); scanf("%d", &c);
	
	if((a>b) && (a>c))
		max= a;
	else if ((b>a) && (b>c))
		max= b;
	else if ((c>a) && (c>b))
		max= c;
		
	printf("\nMaximum all three numbers = %d", max);
		
		
	return 0 ;  
} 
