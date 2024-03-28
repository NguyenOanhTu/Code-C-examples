#include <stdio.h>
int main() 
{
    int a, b, c;
    printf("\nInput number 1: "); scanf("%d", &a);
    printf("\nInput number 2: "); scanf("%d", &b);
    printf("\nInput number 3: "); scanf("%d", &c);
 

   if ((a > b) && (a > c))
            printf("The 1st Number is the greatest among three. \n");
 
   if ((b > c) && (b > a))
        printf("The 2nd Number is the greatest among three \n");
 
   if ((c > a) && (c > b))
           printf("The 3rd Number is the greatest among three. \n");
 	return 0;
}

