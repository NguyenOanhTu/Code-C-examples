#include <stdio.h> 
int main () 
{
	int N;
	printf("\n N ="); scanf("%d", &N);
	if(N % 2 == 0)
		printf("%d is  an even integer  ", N);
	else 
		printf("%d is  an odd integer  ", N);
	return 0 ;  
} 
