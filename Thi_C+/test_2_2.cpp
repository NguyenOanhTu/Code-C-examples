#include <stdio.h>
int main()
{
    char check;
    printf("Input a character: "); scanf("%c", &check);

    if((check>='a'&&check<='z')||(check>='A'&&check<='Z'))
        printf("\ncharacter is letter. ", check);
    else if(check>='0'&&check<='9')
        printf("\ncharacter is digit", check);
    else 
        printf("\nother character .", check);
    return 0;
}


