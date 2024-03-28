#include<stdio.h>
int main()
{
  int n,i,fact=1;
  long s=0;
  printf("\nInput n: ");
  scanf("%d", &n);
  i = 1;
   while (i <= n )
    {
       fact = fact * i;         
       s = s + fact; 
	   i++  ;
    }
    
  printf("\nSum 1! + 2! + ... + %d! là %ld: ", n, s);
  return 0;
}


