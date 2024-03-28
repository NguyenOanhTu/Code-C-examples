#include<stdio.h>
long Factorial (int N)
{
	int i;
	long F = 1;
	for(i = 1; i <= N; i++)
		F = F * i;
	return F;
}

int main()
{
    int N;
    long F;
    printf("\nNhap N: ");
    scanf("%d", &N);
    
    F = Factorial(N);
    printf("Factorial of N is %ld", F);
    return 0;
}
