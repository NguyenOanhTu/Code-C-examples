#include<stdio.h>
int isprime(int N)
{
	int i, count = 0;
	for(i=2;i<N;i++)
	{
		if(N % i == 0)
			count++;
	}
	if(N < 2 || count > 0)
		return 0;
	else
		return 1;
}
int main()
{
	int A[10];
	int i, N = 5, count = 0;
	for(i = 0; i < N; i++)
	{
		printf("A[%d] = ", i);
		scanf("%d", &A[i]);
	} 
	for(i = 0; i < N; i++)
	{
		if(isprime(A[i]) == 1)
			count++;
	}
	printf("Number of prime: %d", count);
	return 0;
}
