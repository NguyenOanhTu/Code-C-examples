#include <stdio.h>

int main()
{
  int n,i,sum,mn,mx;
  printf("Input the starting range or number: "); scanf("%d",&mn);
  printf("Input the ending range of number: "); scanf("%d",&mx);
  printf("The Perfect numbers within the given range: ");
  
  for(n=mn;n<=mx;n++)
  {
    i=1;
    sum = 0;
    while(i<n)
	{
      if(n%i==0)
        sum=sum+i;
        i++;
    }
    if(sum==n)
      printf("%d ",n);
  }
    printf("\n");
	return 0;
}

