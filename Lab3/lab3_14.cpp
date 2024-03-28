#include <stdio.h>

int main()
{   
	long int n,i,t=9;
	int s=0;
	printf("Input the number: "); scanf("%ld", &n);
	
	for (i = 1; i <= n; i++)
	{ 
		s+=t;
	  	printf("%ld ",t);
	  	t= t*10+9;
	}
	printf("\nThe sum of the series = %d \n",s);
	return 0;
} 

