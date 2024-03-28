#include<stdio.h>
int main()
{
  int n,i;
  float S=0;
  printf("\nInput n: "); scanf("%d", &n);
  for( i = 1; i <= n; i++)
    S = S + 1.0 / i;
  printf("\nSum 1 + 1/2 + ... + 1/%d là: %.2f",n, S);
  return 0;
}
