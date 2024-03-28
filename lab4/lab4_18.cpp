#include <stdio.h>
#include <math.h>
int sum(int n)
{
	int i,x,sum=x,m=-1,ctr,mm,nn;
	printf("The values of the series: \n");
	printf("%d\n",x);
    for (i = 1; i < n; i++) 
    {
        ctr = (2 * i + 1);
        mm = pow(x, ctr);
        nn = mm * m;
        printf("%d \n",nn);
        sum = sum + nn;
        m = m * (-1);
	}
	return sum;
}
int main()
{
	int x,n;
	printf("Input the value of x :"); scanf("%d",&x);
	printf("Input number of terms : "); scanf("%d",&n);
	printf("\nThe sum = %d\n",sum(n));
	return 0;
}

