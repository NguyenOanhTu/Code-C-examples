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
	
	// Insert X = 10 to the end of the array:
    A[N] = X;
    N++;
    
    displayArray(A, N);    
	
	return 0;
}
