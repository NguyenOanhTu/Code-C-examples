#include <math.h>
#include <stdio.h> 
int main () 
{
	float a,b,c,x,x1,x2,d;
	printf("the value a= "); scanf("%f", &a);
	printf("the value b= "); scanf("%f", &b);
	printf("the value c= "); scanf("%f", &c);
	d= (b*b)-4*a*c;
	
	if(d==0)
	{
		x = -b+(2*a);
		printf("The roots are equal and they x= %f", x);
	}
	else if (d>0)
	{
		x1= (-b+sqrt(d))/(2*a);
		x2= (-b-sqrt(d))/(2*a);
		printf("the roots are equal and they are x1=%f /n x2=%f", x1,x2);
	}
	else 
		printf("Phuong trinh vo nghiem");
	
	return 0 ;  
} 
