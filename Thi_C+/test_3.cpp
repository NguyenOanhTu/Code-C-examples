#include <stdio.h>
float Sum(int x, int N) 
{
	int i;
	float sum = 1,multi = 1;
	for (i=1;i<N;i++)
	{
	  multi = multi *x/(float)i;
	  sum = sum + multi ;
	}
	return sum;
}
int main()
{
	int x,N;
	printf("Input x :"); scanf("%d",&x);
	printf("Input N : "); scanf("%d",&N);
	printf("\nSum : %f\n",Sum(x,N));
	return 0;
} 

