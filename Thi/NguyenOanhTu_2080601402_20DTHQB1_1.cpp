#include <stdio.h> 
int  main()
{  
   int custid;
   float ave=0 ,mascore, phscore, chscore;
   char custnam[25];

   printf("Input studen ID :"); fflush(stdin); scanf("%d",&custid);
   printf("Input full name :"); fflush(stdin); scanf("%s",custnam);
   printf("Input math score : ");fflush(stdin);  scanf("%f",&mascore);
   printf("Input physics score : ");fflush(stdin); scanf("%f",&phscore);
   printf("Input chemistry score : ");fflush(stdin); scanf("%f",&chscore);
   ave = (((mascore*2)+(phscore*2)+chscore))/5;
   printf(" the average score is %f and  ", ave);
    if (ave <5)
		printf("Student rating is Weak");
	else if (ave >= 5 && ave < 7)
		printf("Student rating is Medium");
	else if (ave >= 7 && ave < 8)
			printf("Student rating is Rather");
	else
			printf("Student rating is Great");
   
  
  
   return 0;
}  

