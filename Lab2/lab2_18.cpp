#include <stdio.h>
int main()  
{  
    int anga, angb, angc, sum;  
	printf("Input angle a: "); scanf("%d", &anga);  
	printf("Input angle b: "); scanf("%d", &angb);  
	printf("Input angle c: "); scanf("%d", &angc);  
	 
    sum = anga + angb + angc;   
    
    if(sum == 180)  
        printf("The triangle is valid.\n");    
    else   
        printf("The triangle is not valid.\n");  
	return 0; 
 } 

