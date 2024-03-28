#include <stdio.h>

int main()
{
   int A[5];
   int i,sum=0;
   for(i=0; i<5; i++)
   {
   	printf("A[%d] = ",i);
   	scanf("%d", &A[i]);
   }
   printf("A = ");
   for(i=0;i<5; i++)
   {
		printf("%d ", A[i]);
   		sum = sum+A[i];
	}
	printf("\nA[1] = %d", A[1] );
   	printf("\nsum = %d", sum);	
    return 0;
}
    
    
