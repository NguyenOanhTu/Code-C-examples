#include <stdio.h>
int sum(int n)
{
	int r,sum=0,t;
	for(t=n; n!=0; n=n/10)
	{
         r=n % 10;
         sum=sum*10+r;
    }
    return sum;
}
int main()
{
    int n;
    printf("Input a number: "); scanf("%d",&n);

   
	printf("The number in reverse order is : %d \n",sum(n));
	return 0;
}

