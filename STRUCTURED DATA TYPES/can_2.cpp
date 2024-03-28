#include <stdio.h>
#include <math.h>
int main () 
{
	int xA, yA, xB, yB;
	float distance;
	xA = 1, yA= 1;
	xB = 3, yB = 2;
	distance = sqrt((xA-xB)*(xA-xB) + (yA-yB)*(yA-yB));
	printf("\nThe distance = %f", distance);
	return 0;
}
	
	

