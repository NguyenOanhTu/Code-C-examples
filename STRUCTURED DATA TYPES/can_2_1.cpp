#include <stdio.h>
#include<math.h>
struct POINT{
	int x;
	int y;
};

int main(){
	struct POINT A, B;
	float distance;
	A.x = 1;	A.y = 1;
	B.x = 3; 	B.y = 2;
	printf("\nPoint A is (%d, %d)", A.x, A.y);
	printf("\nPoint B is (%d, %d)", B.x, B.y);
	
	distance = sqrt((A.x-B.x)*(A.x-B.x) + (A.y-B.y)*(A.y-B.y));
	printf("\nThe distance = %f", distance);
	
	return 0;
}
