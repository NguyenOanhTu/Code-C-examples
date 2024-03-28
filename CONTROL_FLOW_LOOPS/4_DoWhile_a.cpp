#include<stdio.h>
int main()
{
  int n,i;
  long S = 0;
  do
    {
    printf("\nInput n: "); scanf("%d", &n);
      if(n <= 0)
        printf("\n n > 0. Please Input again!");
    }
	while(n <= 0);
    i = 1;
	while(i <= n)
  	{
    S = S + i * i;
    i++;
	}
  printf("\nSum 1^2 + 2^2 + ... + %d^2 = %ld", n, S);
  return 0;
}
