#include <stdio.h>
int sum (int n)
{
	int sum=0;
	printf("Enter 5 number: ");
	for(int i=1; i<=5; i++)
	{
		scanf("%d", &n);
		sum = sum+n;
	}
	return sum;
} 
int main()
{
    int n;
    printf("sum of 5 number is  %d",sum(n));
    return 0;
}
    
