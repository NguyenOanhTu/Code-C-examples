#include <stdio.h>
int main()  
{  
    int sidea, sideb, sidec;   
    printf("Input sidea: ");scanf("%d", &sidea);  
    printf("Input sideb: ");scanf("%d", &sideb); 
    printf("Input sidec: ");scanf("%d", &sidec); 
  
    if(sidea==sideb && sideb==sidec) 
        printf("This is an equilateral triangle.\n");  
    else if(sidea==sideb || sidea==sidec || sideb==sidec)  
        printf("This is an isosceles triangle.\n");  
    else     
        printf("This is a scalene triangle.\n");  
     

    return 0;  
} 

