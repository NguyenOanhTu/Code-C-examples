#include<stdio.h>
int main()
{
	int n;
	do
	{
		printf("\nEnter an integer: ");
		scanf("%d", &n);
	}
	while(n < 0 && printf("\n n >= 0. Please Input again!"));
	printf("\nReversed number %d =  ", n);
	do
		printf("%d", n % 10);
	while(n /= 10); 
	return 0;
}
