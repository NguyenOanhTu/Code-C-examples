#include <stdio.h>
int main() 
{
    long long N;
    int i = 0;
    printf("Enter an integer: "); scanf("%lld", &N);

     for(i = 1; i <= N; i++)
	{
		if(N != 0 )
		N /= 10;
    }
    printf("Number of digits: %d", i);
    return 0;
}
