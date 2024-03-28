#include <stdio.h>
#include<math.h>
struct POINT{
	char name;
	int x;
	int y;
};

void inputPOINT(struct POINT &P){
	printf("Input point name: ");
	fflush(stdin);
	scanf("%c", &P.name);
	printf("Input point coordinates: ");
	scanf("%d%d", &P.x, &P.y);
}

void outputPOINT(struct POINT P){
	printf(" %c(%d, %d)", P.name, P.x, P.y);
}

float distance(struct POINT A, struct POINT B){
	float distance = sqrt((A.x-B.x)*(A.x-B.x) + (A.y-B.y)*(A.y-B.y));
	return distance;
}

int main(){
	struct POINT A, B, C;
	float a, b, c;
	inputPOINT(A);
	inputPOINT(B);
	inputPOINT(C);
	
	printf("\nPoints are: "); 
	outputPOINT(A);
	outputPOINT(B);
	outputPOINT(C);
	
	a = distance(A, B);
	b = distance(B, C);
	c = distance(A, C);
	
	if (a+b > c && a+c> b && b+c>a){
		if(a == b && b == c)
			printf("\nThis is Equilateral triangle");
		else if(a == b || a == c || b == c){
			float a_square = (A.x-B.x)*(A.x-B.x) + (A.y-B.y)*(A.y-B.y);
			float b_square = (C.x-B.x)*(C.x-B.x) + (C.y-B.y)*(C.y-B.y);
			float c_square = (A.x-C.x)*(A.x-C.x) + (A.y-C.y)*(A.y-C.y);
			if((a_square == b_square + c_square) || (b_square == a_square + c_square) || (c_square == a_square + b_square))
				printf("\nThis is Isosceles Right triangle");
			else
				printf("\nThis is Isosceles triangle");			
		}
		else if ((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b))
			printf("\nThis is Right triangle");
	}
	else{
		printf("This is not a triangle");
	}
	
	return 0;
}
