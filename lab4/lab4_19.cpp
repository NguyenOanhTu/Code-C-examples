#include <stdio.h>
int sum(int n)
{
	int sum = 0,i;
	printf("The positive divisor: ");
    for (i=1;i<n;i++)
      {
      if(n%i==0)
         {
         sum=sum+i;
         printf("%d  ",i);
         }
       }
    return sum;
}
int  main()
{
  	int n;
  	printf("Input the number: "); scanf("%d",&n);
	printf("\nThe sum of the divisor is : %d",sum(n));
    if(sum(n)==n)
      printf("\nSo, the number is perfect.");
    else
      printf("\nSo, the number is not perfect.");
	  printf("\n");
	return 0; 
}

