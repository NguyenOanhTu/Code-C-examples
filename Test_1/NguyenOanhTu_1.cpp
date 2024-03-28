#include <stdio.h>  
#include<math.h>   
int main() {  
    float sideA, sideB, sideC, Perimeter, Area, s;  
    printf("Input sideA: ");scanf("%f", &sideA);  
    printf("Input sideB: ");scanf("%f", &sideB); 
    printf("Input sideC: ");scanf("%f", &sideC);     
   
    if((sideA + sideB > sideC)&&(sideB + sideC > sideA) &&(sideC + sideA > sideB)) 
	{  
        printf("It is a Valid Triangle\n");
        Perimeter = sideA+sideB+sideC;
        s = (sideA+sideB+sideC)/2;
		Area = sqrt(s*(s-sideA)*(s-sideB)*(s-sideC));
		printf("\n Perimeter of Traiangle = %.2f\n", Perimeter);
		printf("\n Semi Perimeter of Traiangle = %.2f\n",s);
		printf("\n Area of triangle = %.2f\n",Area);
		  
    } 
	else 
	{  
        printf("It is an invalid Triangle");  
    }  
   
    return 0;  
}
