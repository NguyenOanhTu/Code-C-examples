#include <stdio.h> 
float sum(int n)
{
	int i,pr,y=2,m;
	float x,sum=1.00,t=1.00,num=1.00,fac=1.00;
	for(i=0;i<n;i++);
	{
		for(pr=1;pr<=y;pr++);
		{
			fac=fac*pr;
			num=num*x;
		}
	  m=m*(-1);
	  num=num*m;
	  t=num/fac;
	  sum=sum+t;
	  y=y+2;
	  num=1.00;
	  fac=1.00;
	}
	return sum;
}
int main () 
{
	float x;
	int n;
	printf("Input the value of x: "); scanf("%f",&x);
	printf("Input the number of terms: "); scanf("%d",&n);
	printf("\nthe sum = %f\nNumber of terms = %d\nvalue of x = %f\n",sum(n),n,x);

	return 0;
} 
