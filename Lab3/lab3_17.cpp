#include <stdio.h>

int main()
{
   int i,n,s=0;
   printf("Input the number of terms : "); scanf("%d",&n);
   printf("\nThe square natural upto %d terms are: ",n);
   
   for(i = 1; i <= n; i++)
   {
     printf("%d  ",i*i);
     s+=i*i;
   }
   printf("\nThe Sum of Square Natural Number upto %d terms = %d \n",n,s);
   return 0;
}

