#include <stdio.h>
int main() 
{
    long long N;
    int i = 0;
    printf("Enter an integer: "); scanf("%lld", &N);

    while (N != 0)
	{
        N /= 10;    
        ++i;
    }

    printf("Number of digits: %d", i);
    return 0;
}
