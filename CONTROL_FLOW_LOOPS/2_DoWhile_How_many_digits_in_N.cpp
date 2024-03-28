#include <stdio.h>
int main() 
{
    long long N, temp;
    int i = 0;
    do
	{
	printf("Enter an integer: "); scanf("%lld", &N);
		if(N <= 0)
		printf("\n N > 0. Please Input again!");
    }
	while(N <= 0);
		if(N == 0) 
		N = 1;
    while (N != 0)
	{
        N /= 10;    
        ++i;
    }

    printf("Number of digits: %d", i);
    return 0;
}
