#include <stdio.h>
void inputArray(int A[], int &N){
	printf("\nInput the size of array: ");
	scanf("%d", &N);
	for(int i = 0; i < N; i++){
		printf("A[%d] = ", i);
		scanf("%d", &A[i]);
	}
}
void displayArray(int A[], int N){
	printf("\nThe array: ");
	for(int i = 0; i < N; i++){
		printf("%d ", A[i]);		
	}
}

int main() {
	int A[100], N = 1, i, X = 10;
	
	printf("Before input array, N = %d", N);
	
	inputArray(A, N);
	
	printf("\nAfter input array, N = %d", N);
	displayArray(A, N);
	
	// Insert X = 10 to the end of the array:
    //A[N] = X;
    //N++;
    
    //displayArray(A, N);    
	
	return 0;
}
