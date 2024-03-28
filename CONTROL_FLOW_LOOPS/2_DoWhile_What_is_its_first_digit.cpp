#include <stdio.h>

int main()
{
    int n;
    printf("Input number: "); scanf("%d", &n);
    do 
    	n = n / 10;
    while(n >= 10);
    printf("First digit = %d", n);
    return 0;
}
