#include <stdio.h>

int main()
{
   int x, y, rows;
   printf("Input number of rows: "); scanf("%d", &rows);
   
   for(x = 1; x <= rows; x++)
   {
   	for(y = 1; y <= x; y++)
   		printf("%d",y);
   		printf("\n");
	}
   return 0;
} 
