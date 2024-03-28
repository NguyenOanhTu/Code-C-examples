#include <stdio.h>

int  main()
{
  int n,i,sum;
  printf("Input the number: "); scanf("%d",&n);
  sum = 0;
  printf("The positive divisor: ");
  
    for (i=1;i<n;i++)
      {
      if(n%i==0)
         {
         sum=sum+i;
         printf("%d  ",i);
         }
       }
	printf("\nThe sum of the divisor is : %d",sum);
    if(sum==n)
      printf("\nSo, the number is perfect.");
    else
      printf("\nSo, the number is not perfect.");
	  printf("\n");
	return 0; 
}

