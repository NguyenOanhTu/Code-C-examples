#include <stdio.h> 
int  main()
{  
   int custid, conu;
   int SumPay;
   char custnam[25];

   printf("Input Customer ID :"); scanf("%d",&custid);
   printf("Input the name of the customer :"); scanf("%s",custnam);
   printf("Input the unit consumed by the customer : "); scanf("%d",&conu);
    if (conu <20 )
		SumPay = 2000*conu;
	else if (conu >= 20 && conu < 40)
		SumPay = 2000*20 + (conu-20)*4000;
	else if (conu >= 40 && conu < 60)
			SumPay = 2000*20 + 4000*20 + (conu-40)*8000;
	else
			SumPay = 2000*20 + 4000*20 + 8000*20 + (conu-60)*10000;
   printf("\nWater Bill\n");
   printf("Customer IDNO					:%d\n",custid);
   printf("Customer Name					:%s\n",custnam);
   printf("unit Consumed					:%d\n",conu);
   printf("Total Amount To Pay				:%d VND",SumPay);
   return 0;
}  

