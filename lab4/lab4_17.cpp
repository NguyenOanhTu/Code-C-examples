#include <stdio.h>
float sum(int n)
{
	float x,sum=1,no_row=1;
	int i;
	for (i=1;i<n;i++)
	{
	  no_row = no_row*x/(float)i;
	  sum =sum+ no_row;
	}
	return sum;
}
int main()
{
	float x;
	int n;
	printf("Input the value of x :"); scanf("%f",&x);
	printf("Input number of terms : "); scanf("%d",&n);
	printf("\nThe sum is: %f\n",sum(n));
	return 0;
} 

