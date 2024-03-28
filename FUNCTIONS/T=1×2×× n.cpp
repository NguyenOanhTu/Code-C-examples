#include <stdio.h> 
long Factorial (int N)
{	
	int i;
	long F=1;
	for(i=1;i<=N;i++)
		F = F*i;
	return F;
}
int main()
{
	int i,N;
	long s=0;
	N=3;	
	for(s=1;i<=N;i++)
		s = s+Factorial(i);
	printf("s=%ld",s);
	return 0;
}
