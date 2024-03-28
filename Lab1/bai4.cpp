#include <stdio.h> 
int main () 
{
	int height, width, perimeter, area;
	
	height = 7;
	width = 5;
	
	perimeter = 2*(height + width);
	printf("Perimeter of the rectangle = %d inches\n", perimeter);
	
	area = height * width;
	printf("Area of the rectangle = %d square inches\n", area);
	
	
	
	return 0 ;  
} 
