#include <stdio.h>
int isPrime(int num)
{
    int i;
    for(i=2; i<=num/2; i++)
    {    
        if(num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
void printPrimes(int lower, int upper)
{
    printf("The prime number between %d and %d are: ", lower, upper);
    while(lower <= upper)
    {
        if(isPrime(lower))
        {
            printf("%d ", lower);
        }
        lower++;
    }
}
 
int main()
{
    int lower, upper;
    printf(" Input the starting range or number:  "); scanf("%d", &lower);
    printf(" Input the ending range of number: "); scanf("%d", &upper);
    printPrimes(lower, upper);
    return 0;
} 

