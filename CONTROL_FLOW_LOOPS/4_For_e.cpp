#include<stdio.h>
int main()
{
  int n,i,fact=1;
  long s=0;
  printf("\nInput n: ");
  scanf("%d", &n);
 
   for ( i = 1; i <= n; i++)
    {
       fact = fact * i;         
       s = s + fact;   
    }
    
  printf("\nSum 1! + 2! + ... + %d! là %ld: ", n, s);
  return 0;
}


