#include <stdio.h> 
int main () 
{
	int number ;
	printf("\nInput your age"); scanf("%d", &number);
	
	if (number >= 18)
		printf("Congratulation! You are eligible for casting your vote. ");
	else 
		printf("sorry you can't vote  ");
	return 0 ;  
} 
