#include <stdio.h>
int factorial(int n)
{
	int f;
	if (n==1)
		return 1;
	else 
		f = n*factorial(n-1);
	return f;
}
void input(int &n)
{
	printf("Input the number:");
	scanf("%d",&n);
}
int main()
{
   int n;
   input(n);
   printf("The factorial of %d is %d",n,factorial(n));
   return 0;
} 

