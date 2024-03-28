#include <stdio.h> 
int main () 
{
	int Numofday, days, years, weeks;
	printf("Number of days:");
	scanf("%d", &Numofday);
	
	years = Numofday/365;
	weeks = (Numofday % 365)/7;
	days = Numofday - ((years*365) + (weeks*7));
	
	printf("Years: %d\n", years);
	printf("Weeks: %d\n", weeks);
	printf("Days: %d\n", days);
		

	return 0 ;  
} 
