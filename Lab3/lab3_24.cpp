#include <stdio.h>

int main()
{
    int num,i,k,nu1,nu2;

    printf("Input starting number of range: "); scanf("%d",&nu1);
    printf("Input ending number of range : "); scanf("%d",&nu2);
    printf("The prime numbers between %d and %d are: \n",nu1,nu2);
  
    for(num = nu1;num<=nu2;num++)
       {
         k = 0;

         for(i=2 ;i <= num/2; i++)
        {
             if(num%i==0)
			{
                 k++;
                 break;
            }
        }
        
         if(k==0 && num!= 1)
             printf("%d ",num);
       }
printf("\n");  
}

