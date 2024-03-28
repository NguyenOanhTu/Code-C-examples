#include<stdio.h>
int main()
{
    int i, N;
    long S;
    printf("\nInput N: "); scanf("%d", &N);
    i = 1;
    S = 0;
    while(i <= N)
    {
        if(N % i == 0)
        {
        	printf("%4d", i);
        	S = S + i;
        }
            i++;
    }
    printf("\nSum of all divisors of N = %d is %ld", N, S);
    
    return 0;
}
