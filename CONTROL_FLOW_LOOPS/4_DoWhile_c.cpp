#include<stdio.h>
int main()
{
 	int i, n;
  	float S=0;
	do
	{
     printf("\nInput n: "); scanf("%d", &n);
     if(n < 1)
        printf("\nn >= 1, Please Input again!");
	}
  	while(n < 1);
  	i=1;
  	while(i <= n)
   {
      S = S + (float)i / (i + 1); 
      i++;
   }
  printf("\nSum 1/2 + 2/3 + ... + %d/%d là: %.2f",n,(n + 1), S);
  return 0;
}
