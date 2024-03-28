#include<stdio.h>
int main()
{
    int i, n;
    do
    {
    printf("\nInput n: "); scanf("%d", &n);
      if(n <= 0)
        printf("\n N phai > 0");
    }
	while(n<=0);
    i = 1;
	while(i<=n)
    {
        if(n%i== 0)
            printf("%4d",i);
            i++;
    }

    
    return 0;
}
