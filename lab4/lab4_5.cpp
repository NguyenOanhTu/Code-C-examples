#include <stdio.h>
int Check(int num)
{
	return(num % 2 == 0);
}
int main() 
{	
    int num;
    printf("Enter an integer: "); scanf("%d", &num);
    if(Check(num))
        printf("The entered number is Even.", num);
    else
        printf("The entered number is Odd.", num);
    
    return 0;
}


