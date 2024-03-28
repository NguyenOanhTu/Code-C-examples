#include  <stdio.h>
main ()
 {
   	int a,b ;
   	char name1[20], name2[20];
   	printf("\n ten cua minh la: "); scanf("%s", name1);
   	printf("\n tuoi cua minh "); scanf("%d", &a);
   	
   	printf("\n ten cua ban la:"); scanf("%s", name2);
   	printf("\n tuoi cua ban "); scanf("%d", &b);
   	
	if (a-b<0)
		printf("\n %s tre nhat ", name1);
	else 
		printf("\n %s tre nhat", name2); 
	
   return 0;
 }
