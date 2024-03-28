#include <stdio.h>
int stLimit, enLimit;
void input()
{
	do
	{
		printf("input the starting range of number: "); scanf("%d",&stLimit);
		printf("input the ending range of number: "); scanf("%d",&enLimit);
	}
	while(stLimit > enLimit);
} 
int checkPerfect(int n1)
{
    int i, sum;
     
    sum = 0;
    for(i=1; i<n1; i++)
    {
        if(n1 % i == 0)
        {
            sum += i;
        }
    }

    if(sum == n1)
        return 1;
    else
        return 0;
}

void PerfectNumbers(int stLimit, int enLimit)
{
    while(stLimit <= enLimit)
    {
        if(checkPerfect(stLimit))
        {
            printf(" %d  ", stLimit);
        }
        stLimit++;
    }   
}
int SumPerfectNumbers(int stLimit, int enLimit)
{
	int sum=0;
    while(stLimit <= enLimit)
    {
        if(checkPerfect(stLimit))
        {
            sum = sum + stLimit;
        }
        stLimit++;
    }  
	
	return sum;
}
int main()
{
	input();
	printf("\n The perfect numbers between %d to %d are : \n", stLimit, enLimit); 
	PerfectNumbers(stLimit, enLimit);
    printf("\nThe Sum of Perfect numbers within the given range is: %d",SumPerfectNumbers(stLimit,enLimit));
	return 0;
}






