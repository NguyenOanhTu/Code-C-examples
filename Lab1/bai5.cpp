#include <stdio.h> 
int main () 
{
	int radius;
	float perimeter, area;
	
	radius = 6;
	
	perimeter = 2*radius*3.14;
	printf("Perimeter of the Circle = %f inches\n", perimeter);
	
	area = radius * radius*3.14;
	printf("Area of the Circle = %f square inches\n", area);
	
	return 0 ;  
} 
