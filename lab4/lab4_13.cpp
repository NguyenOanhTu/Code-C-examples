#include <stdio.h>
long Factorial(int n)
{
	int i;
	long f = 1;
	for(i=1;i<=n;i++)
      f=f*i;
    return f;

}
int main()
{
  int n;
  long f;
  printf("Input the number : "); scanf("%d",&n);
  f = Factorial(n);
  printf("The Factorial of %d is: %d\n",n,f);
  return 0;
}

