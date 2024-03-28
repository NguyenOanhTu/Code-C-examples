#include<stdio.h>
int main()
{
    int i, N;
    long S;
    printf("\nInput N: "); scanf("%d", &N);
    i = 1;
    S = 0;
    for(int i = 1; i <= N; i++)
    {
     if(N % i == 0)
     {
      printf("%4d", i);
      S = S + i;
     }
    }
    printf("\nSum of all divisors of N = %d is %ld", N, S);
    
    return 0;
}
