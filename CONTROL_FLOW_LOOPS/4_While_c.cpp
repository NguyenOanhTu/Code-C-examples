#include<stdio.h>
int main()
{
	int i, n;
	float S=0;
	printf("\nInput n: "); scanf("%d", &n);
	i=1;
    while(i <= n)
   {
      S = S + (float)i / (i + 1); 
      i++;
   }
  printf("\nSum 1/2 + 2/3 + ... + %d/%d là: %.2f",n,(n + 1), S);
  return 0;
}
