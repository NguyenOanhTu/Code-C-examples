#include <stdio.h>

int main()
{
    char character;
	printf("Input a character: ");  
    scanf("%c", &character);  
  


    if(character >= 'A' && character <= 'Z')
        printf("'%c' is uppercase alphabet.", character);
    else if(character >= 'a' && character <= 'z')
        printf("'%c' is lowercase alphabet.", character);
    else
        printf("'%c' is not an alphabet.", character);

    return 0;
}
