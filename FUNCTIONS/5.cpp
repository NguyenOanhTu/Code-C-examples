#include<stdio.h>

void printDivisors(int n)
{
	int i;
    for (int i=1;i<=n;i++)
        if (n%i==0)
            printf("%d ",i);
}
int main()
{
	int n;
	printf("Input n: "); scanf("%d",&n);
    printf("The divisors of N: \n");
    printDivisors(n);
    return 0;
}
