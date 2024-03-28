#include<stdio.h>
int main()
{
    int n, s = 0;
    do
    {
    printf("Enter a number:  ");
    scanf("%d", &n);
    }
	while(n < 0 && printf("\n n >= 0. Please Input again!"));
    while(n != 0)
    {
        s = s + n % 10;
        n = n / 10;
    }
    printf("Sum of digits of a number = %d\n", s);
    return 0;
}
