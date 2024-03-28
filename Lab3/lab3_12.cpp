#include <stdio.h> 
int main () 
{
	float x,s,t,num=1.00,fac=1.00;
	int i,n,pr,y=2,m;
	printf("Input the value of x: "); scanf("%f",&x);
	printf("Input the number of terms: "); scanf("%d",&n);
	s=1.00; t=1.00;
	
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
	  s=s+t;
	  y=y+2;
	  num=1.00;
	  fac=1.00;
	}
	printf("\nthe sum = %f\nNumber of terms = %d\nvalue of x = %f\n",s,n,x);

	return 0;
} 
