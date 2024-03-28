#include <stdio.h>
int main()
{
	int x,y;

	printf("Input  X=  "); scanf("%d", &x);
	printf("Input Y=  "); scanf(" %d",&y);

	if( x > 0 && y > 0)
	  printf("The coordinate point (%d,%d) lies in the First quandrant.\n", x,y);
	else if( x < 0 && y > 0)
	  printf("The coordinate point (%d,%d) lies in the Second quandrant.\n",x,y);
	else if( x < 0 && y < 0)
	  printf("The coordinate point (%d, %d) lies in the Third quandrant.\n",x,y);
	else if( x > 0 && y < 0)
	  printf("The coordinate point (%d,%d) lies in the Fourth quandrant.\n",x,y);
	else if( x == 0 && y == 0)
	  printf("The coordinate point (%d,%d) lies at the origin.\n",x,y);
	return 0;
}

