#include<stdio.h>
int main()
{
  int n,i;
  float S=0;
  printf("\nInput n: "); scanf("%d", &n);
  i=1;
  while(i <= n)
  {
    S = S + 1.0 / i;
    i++;
  }
  printf("\nSum 1 + 1/2 + ... + 1/%d là: %.2f",n, S);
  return 0;
}
