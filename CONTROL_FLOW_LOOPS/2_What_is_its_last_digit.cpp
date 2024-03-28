#include <stdio.h>

int main()
{
    int N,i,lastDigit;
    printf("Input number: "); scanf("%d", &N);
    lastDigit = N % 10;
    printf("Last digit = %d", lastDigit);
	return 0;
}
