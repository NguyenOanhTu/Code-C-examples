#include <stdio.h>
int a, b;
void input()
{
	do
	{
		printf("input the starting range of number: "); scanf("%d",&a);
		printf("input the ending range of number: "); scanf("%d",&b);
	}
	while(a > b);
} 
long sumperfect()
{
	int j, i;
	long sum=0, s=0;
	for(j = a; j <= b; j++)
	{
		for(i = 1; i < j; j++)
		{
			if(j%i==0)
				s=s+i;
		}
		if(j==s)
		{
			printf("%d",j);
			sum = sum + j;
		}
		s = 0;
	}
	return sum;
}
int main()
{
	input();
	printf("The sum of Perfect numbers within the give range: ");
	printf("%ld",sumperfect());
	return 0;
}






