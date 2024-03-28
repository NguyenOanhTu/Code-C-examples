#include <stdio.h>
int arr[100], N;
void inputArray()
{
	printf("\nInput the size of array: ");
	scanf("%d", &N);
	printf("\nInput N elements in the array: ");
	for(int i = 0; i < N; i++)
	{
		printf("\nelement %d: ", i);
		scanf("%d", &arr[i]);
	}
}
int sumelements()
{
	int s=0;
	for(int i = 0; i < N; i++)
		s = s + arr[i];
	return s;
}
int main() 
{

	inputArray();
	printf("Sum of elements in arra are: %d",sumelements());
	
	return 0;
}
