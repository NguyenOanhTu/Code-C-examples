#include <stdio.h>

int main()
{   
	long int n,i,num=0;
	int s=0;
	printf("Input the number: "); scanf("%ld", &n);
	
	for (i = 1; i <= n; i++)
	{ 
		num= num*10+5;
	  	printf("%ld ",num);
	  	s+=num;
	}
	printf("\nThe sum of the series = %d \n",s);
	return 0;
} 

