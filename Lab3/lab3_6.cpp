#include <stdio.h>

int main()
{
   int i,n,s=0;

   printf("Input number of terms : "); scanf("%d",&n);
   printf("\nThe even numbers are :");
   
   for(i = 1; i <= n; i++)
   {
     printf("%d ",2*i);
     s+=2*i; // s= s+2*i
   }
   printf("\nThe Sum of even Natural Number upto %d terms : %d \n",n,s);
   return 0;
} 

