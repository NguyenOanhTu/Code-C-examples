#include <stdio.h>
float cube(float n)
{
	return n*n*n;
}
int main()
 {
    float n;
    printf("Input any number for square: "); scanf("%f",&n);
    printf("The cube of %2f is: %2f",n,cube(n));
    return 0;
 }

