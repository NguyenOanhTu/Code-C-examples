#include <stdio.h> 
int main () 
{
	int i, n, s=0;
	printf("Input the Number: "); scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
	{
		printf("%d ", i);
		s+=i; // s = s + i 
	}
	printf("\nThe sum of natural number upto %d terms %d", n, s);
	
	return 0;
} 
