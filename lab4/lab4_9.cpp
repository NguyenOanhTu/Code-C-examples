#include<stdio.h>
int PrimeOrNot(int n)
{
    int i=2;
    while(i<=n/2)
    {
         if(n%i==0)
             return 0;
         else
             i++;
    }
    return 1;
}

int main()
{
    int n,prime;    	
    printf(" Input a number : "); scanf("%d",&n);
	prime = PrimeOrNot(n);
   if(prime==1)
        printf(" %d is a prime number.\n",n);
   else
      printf(" %d is not a prime number.\n",n);
   return 0;
}

