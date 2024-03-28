#include <stdio.h>
int main()
{
   int x,n;
   printf("Input the number : "); scanf("%d",&n);
   printf("\n");
   
   for(x=1;x<=10;x++)
   	printf("%d X %d = %d \n",n,x,n*x);
   return 0;
} 

