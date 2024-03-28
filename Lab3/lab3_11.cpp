#include <stdio.h>
int main()
{
  int i,F=1,N;
  printf("Input the number : "); scanf("%d",&N);

  for(i = 1; i<= N; i++)
      F = F * i;
  printf("The Factorial of %d is: %d\n",N,F);
  return 0;
}

