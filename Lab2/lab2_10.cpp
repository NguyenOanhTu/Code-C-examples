#include <stdio.h>
int main()
{
	int h;
	printf("Input height = "); scanf("%d", &h);
	switch(h)
	{
		case 174: printf("the person is Toan"); break;
		case 167: printf("the person is tuan"); break;
		case 183: printf("the person is Tu"); break;
		default: printf("No answer"); break; 
	}
    return 0;
}

