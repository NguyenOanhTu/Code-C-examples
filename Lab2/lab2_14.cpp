#include <stdio.h> 
int main () 
{

	float a,b ;
	printf("\n a = "); scanf("%f", &a);
	printf("\n b = "); scanf("%f", &b);
	
	if (a==0)
	{
		if (b==0)
			printf("n\Phuong trinh co vo so nghiem");
		else 
			printf("n\Phuong trinh vo nghiem");	
	}
	else 
		printf("\nPhuong trinh co nghiem x=%f", -b/a);
		
	return 0 ;  
} 
