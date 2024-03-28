#include <stdio.h>
int sum(int n)
{
	int i,sum=0;
	printf("\nThe even numbers are :");
   for(i=1;i<=n;i++)
   {
    printf("%d ",2*i);
    sum+=2*i;
   }
   return sum;
}
int main()
{
   int n;
   printf("Input number of terms : "); scanf("%d",&n);
   printf("\nThe Sum of even Natural Number upto %d terms : %d \n",n,sum(n));
   return 0;
} 

