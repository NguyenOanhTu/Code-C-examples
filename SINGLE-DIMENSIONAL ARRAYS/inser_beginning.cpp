#include <stdio.h>
void displayArray(int A[], int N){
	printf("\nThe array: ");
	for(int i = 0; i < N; i++){
		printf("%d ", A[i]);		
	}
}

int main() {
	int A[100], N = 1, i, X = 10;
	printf("Input the size of array: ");
	scanf("%d", &N);
	for(i = 0; i < N; i++){
		printf("A[%d] = ", i);
		scanf("%d", &A[i]);
	}
	displayArray(A, N);
	for (i=N; i> 0; i--)
	{
		A[i] = A[i-1];
	}
	N++;
	A[0]=X;
	displayArray(A, N);    
	return 0;
}
