#include <stdio.h>

int main()
{

    int N,i,ctr=0;
    printf("Input  a number: "); scanf("%d",&N);
    
    for(i=2;i<=N/2;i++)
	{
        if(N % i==0)
		{
         ctr++;
         break;
        }
    }
    if(ctr==0 && N!= 1)
        printf("%d is a prime number.\n",N);
    else
      printf("%d is not a prime number",N);
	return 0;
}

