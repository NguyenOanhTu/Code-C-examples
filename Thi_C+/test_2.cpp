#include <stdio.h>

int main()
{
  char check;
  printf("\nEnter data : "); 
  scanf("%c", &check); 
  printf("\nThe value of the  data is: %d", check);
  if(check>='A'&&check<='Z'||check>='a'&&check<='z')
  printf ("\n Data is letters ");
  else
  if(check>='0',check<='9')
  printf("\nData is digit ");
  else
  printf ("\nData is other character");
  return 0;
}
