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
		scanf("%d",&arr[i]);
	}
}
void printeelement()
{
	printf("\nAll elements in array A:");
	for(int i=0; i<N; i++)
		printf("\nelement %d: %d",i,arr[i] );
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
void insonguyento(){
    printf("\nCac so nguyen to co trong mang la: \n");
    for(int i=0;i<N;i++)
    {
        if(isprime(arr[i]))
            printf("%5d",arr[i]);
	}
}
	
int main()
{
	inputN();
	inputarray();
	printeelement();
	insonguyento();
	return 0;
}






















