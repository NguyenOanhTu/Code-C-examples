#include <stdio.h>

int main()
{
  int n,i; 
  long sum=0;
  long int t=1;
  printf("Input the number: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
     printf("%ld  ",t);
     sum=sum+t;
     t=(t*10)+1;
  }
  printf("\nThe Sum is : %ld\n",sum);
  return 0;
}

