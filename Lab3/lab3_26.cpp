#include <stdio.h>

int main()
{
    int N,r,S=0,t;
    printf("Input a number: "); scanf("%d",&N);

    for(t=N; N!=0; N=N/10)
	{
         r=N % 10;
         S=S*10+r;
    }
	printf("The number in reverse order is : %d \n",S);
	return 0;
}

