#include <stdio.h>

int main()
{
    int n;
    printf("Input number: "); scanf("%d", &n);
    while(n >= 10)
        n = n / 10;
	printf("First digit = %d", n);
    return 0;
}
