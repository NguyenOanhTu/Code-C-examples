#include <stdio.h>
#include<math.h>
struct POINT{
	int x;
	int y;
};
void outputPOINT(struct POINT P){
	printf("(%d, %d)", P.x, P.y);
}

int main(){
	struct POINT A, B;
	float distance;
	printf("Input point A: ");
	scanf("%d%d", &A.x, &A.y);
	printf("Input point B: ");
	scanf("%d%d", &B.x, &B.y);
	
	printf("\nPoint A is "); outputPOINT(A);
	printf("\nPoint B is "); outputPOINT(B);
	
	distance = sqrt((A.x-B.x)*(A.x-B.x) + (A.y-B.y)*(A.y-B.y));
	printf("\nThe distance = %f", distance);
	
	return 0;
}
