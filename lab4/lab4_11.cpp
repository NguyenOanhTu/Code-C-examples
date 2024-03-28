#include <stdio.h>
int sum( int n)
{	
	int sum=0,i;
	printf("\nThe odd numbers are :");
   for(i=1;i<=n;i++)
   {
     printf("%d ",2*i-1);
     sum+=2*i-1;
   }
   return sum;
}
int main()
{
   int n;
   printf("Input number of terms : "); scanf("%d",&n);
   printf("\nThe Sum of odd Natural Number upto %d terms : %d \n",n,sum(n));
   return 0;
}

