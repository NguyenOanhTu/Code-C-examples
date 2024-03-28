#include <stdio.h>
int main() {
	int A[100], N = 1, i;
	printf("Input the size of array: ");
	scanf("%d", &N);
	for(i = 0; i < N; i++){
		printf("A[%d] = ", i);
		scanf("%d", &A[i]);
	}
	printf("The array: ");
	for(i = 0; i < N; i++){
		printf("%d ", A[i]);		
	}
	return 0;
}
