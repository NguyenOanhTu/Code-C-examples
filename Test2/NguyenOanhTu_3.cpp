#include <stdio.h>
int  arr[100], N=1,i;
void inputN()
{
	do
	{
		printf("Input N of the array: ");
		scanf("%d",&N);	
	}
	while (N<=0 || N>=100);
}
void inputarray()
{
	printf("\nInput N elements in the array: ");
	for(int i = 0; i < N; i++)
	{
		printf("\nelement %d: ", i);
		scanf("%d", &arr[i]);
	}
}
void printeelement()
{
	printf("\nAll elements in array A:");
	for(int i=0; i<N; i++)
		printf("\nelement %d: %d",i,arr[i] );
}
int printelementEven()
{
	int count_even = 0;
	for (int i=0; i<N; i++)
	{
		if (arr[i] % 2 == 0)
			count_even++;
	}
	printf("\nThe number of even integers: %d",count_even);
	for (int i=0; i<N; i++)
	{
		if (arr[i] % 2 == 0)
			printf("\nelement %d: %d",i,arr[i]);
	}
	return count_even;
}

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
int printelementPrime()
{
	int sum_prime = 0;
	for(i = 0; i < N; i++)
	{
		if(isprime(arr[i]) == 1)
			sum_prime += arr[i];
	}
	printf("\nThe number of prime numbers: %d",sum_prime);
    for(int i=0;i<N;i++)
    {
        if(isprime(arr[i]))
           printf("\nelement %d: %d",i,arr[i]);
	}
	return sum_prime;
} 
void insertspect()
{
	int p, x;
	printf("\nInput insert position: "); scanf("%d",&p);
	printf("\nInput insert number: "); scanf("%d",&x);
	for(i = N; i >= p-1; i--)
		arr[i]=arr[i-1];
	arr[p-1] = x;
	N++;
	for(i = 0; i < N; i++)
		printf("%5d",arr[i]);
}
void deletemid()
{
	printf("\ndelete the middle of array:");
	for(i = ((N/2)); i < N; i++)
		arr[i]=arr[i+1];
	N--;
	for(i = 0; i < N; i++)
		printf("%5d",arr[i]);
}
void searchspeci()
{
	int x;
	printf("\ninput value for search: "); scanf("%d",&x);
	printf("The position of %d:\n",x);
	for(i = 0; i < N; i++)
	{
		if(arr[i] == x)
			printf("arr[%d] ",i);
	}
}
int main() 
{
	inputN();
	inputarray();
	printeelement();
	printelementEven();
	printelementPrime();
	insertspect();
	deletemid();
	searchspeci();
	return 0;
}
