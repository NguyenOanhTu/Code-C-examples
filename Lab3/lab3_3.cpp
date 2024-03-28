#include <stdio.h>
int main()
{       
    int i,n,s=0;
	float avg;
	printf("Input the 10 numbers : \n");
	for (i = 1; i<= 10 ;i++)
	{
        printf("Number%d :",i);
		scanf("%d",&n);
		s+=n; // s = s + n
	}
	avg = s/10.0;
	printf("The sum of 10 no is : %d\n",s);
	printf("The Average is : %f\n",avg);
    return 0;
 
}

