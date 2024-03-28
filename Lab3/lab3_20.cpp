#include <stdio.h>
int main()
{
   int x,i,n;
   printf("Input upto the table number starting from 1 : "); scanf("%d",&n);
   printf("Multiplication table from 1 to %d \n",n);
   
   for(i=1;i<=10;i++)
   {
     for(x=1;x<=n;x++)
     {
    	if (x<=n-1)
           printf("%dx%d = %d, ",x,i,i*x);
    	else
	    printf("%dx%d = %d",x,i,i*x);
      }
     printf("\n");
    }
    return 0;
} 

