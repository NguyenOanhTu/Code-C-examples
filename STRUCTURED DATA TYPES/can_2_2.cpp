#include <stdio.h>
#include<math.h>
struct POINT{
	int x;
	int y;
};

int main(){
	struct POINT A, B;
	float distance;
	printf("Input point A: ");
	scanf("%d%d", &A.x, &A.y);
	printf("Input point B: ");
	scanf("%d%d", &B.x, &B.y);
	
	printf("\nPoint A is (%d, %d)", A.x, A.y);
	printf("\nPoint B is (%d, %d)", B.x, B.y);
	
	distance = sqrt((A.x-B.x)*(A.x-B.x) + (A.y-B.y)*(A.y-B.y));
	printf("\nThe distance = %f", distance);
	
	return 0;
}
