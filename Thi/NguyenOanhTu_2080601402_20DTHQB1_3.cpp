#include <stdio.h>
int  arr[100], N=1,i;
void inputN()
{
	do
	{
		printf("Input N of the array: ");
		scanf("%d",&N);	
	}
	while (N<=0 || N>=100);
}
void inputarray()
{
	printf("\nInput N elements in the array: ");
	for(int i = 0; i < N; i++)
	{
		printf("\nelement %d: ", i);
		scanf("%d", &arr[i]);
	}
}
void printeelement()
{
	printf("\n\nThe values store into the array in reverse are :\n");
   for(i=N-1;i>=0;i--)
      {
	   printf("% 5d",arr[i]);
	  }
   printf("\n\n");

}


void insertspect()
{
	int p, x;
	printf("\nInput insert position: "); scanf("%d",&p);
	printf("\nInput insert number: "); scanf("%d",&x);
	for(i = N; i >= p-1; i--)
		arr[i]=arr[i-1];
	arr[p-1] = x;
	N++;
	for(i = 0; i < N; i++)
		printf("%5d",arr[i]);
}

void MaximumandMinimum()
{
	int mx,mn;
	mx = arr[0];
    mn = arr[0];

    for(i=1; i<N; i++)
    {
        if(arr[i]>mx)
        {
            mx = arr[i];
        }


        if(arr[i]<mn)
        {
            mn = arr[i];
        }
    }
    printf("\nMaximum element is : %d\n", mx);
    printf("Minimum element is : %d\n\n", mn);
}
int main() 
{
	inputN();
	inputarray();
	printeelement();
	insertspect();
	MaximumandMinimum();
	return 0;
}
