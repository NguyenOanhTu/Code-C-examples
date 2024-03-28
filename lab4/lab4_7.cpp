#include <stdio.h>
void InputN (int &n)
{
	printf("\nInput the number: "); scanf("%d",&n);
}
int main()
{
    int n;
    InputN(n);
    printf("The number: %d",n);
    InputN(n);
    printf("The number: %d",n);
    return 0;
}
