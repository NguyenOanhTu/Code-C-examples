#include <stdio.h>
struct FRACTION
{
	int num;
	int deno;
};
void inputFRACTION(struct FRACTION &F)
{
	scanf("%d%d", &F.num, &F.deno);
}
void outputFRACTION(struct FRACTION F)
{
	printf("(%d, %d)", F.num, F.deno);
}
float SumFraction(struct FRACTION A, struct FRACTION B)
{
	int numerator,denominator;
	numerator = A.num*B.deno+A.deno*B.num;
	denominator = A.deno*B.deno;
	return (float)numerator/denominator;
}
int main()
{
	struct FRACTION F,A,B;
	float sum;
	
	printf("\nInput fraction F : "); inputFRACTION(F);
	printf("\nInput fraction A : "); inputFRACTION(A);
	printf("\nInput fraction B : "); inputFRACTION(B);
	
	printf("\nfraction F is "); outputFRACTION(F);
	printf("\nfraction A is "); outputFRACTION(A);
	printf("\nfraction B is "); outputFRACTION(B);

	sum = SumFraction(A,B);
	printf("\nSum Fraction A and B are %f",sum);
	return 0;
} 

