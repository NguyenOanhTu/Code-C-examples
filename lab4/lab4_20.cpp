#include <stdio.h>
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

int main()
{
    int stLimit, enLimit;    
    printf(" Input the starting range or number:  "); scanf("%d", &stLimit);
    printf(" Input the ending range of number: "); scanf("%d", &enLimit);
    printf("\n The perfect numbers between %d to %d are : \n", stLimit, enLimit); 
	PerfectNumbers(stLimit, enLimit);
    printf("\n\n"); 
    
    return 0;
}


