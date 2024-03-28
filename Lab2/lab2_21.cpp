#include <stdio.h>
int main()  
{  
    char character;
	printf("Input a character: ");  
    scanf("%c", &character); 
  
    if(character=='a' || character=='e' || character=='i' || character=='o' || character=='u' || character=='A' || character=='E' || character=='I' || character=='O' || character=='U')    
        printf("The alphabet is a vowel.\n");    
    else if((character>='a' && character<='z') || (character>='A' && character<='Z'))    
        printf("The alphabet is a consonant.\n");   
    else    
        printf("The character is not an alphabet.\n"); 
    return 0;   
}

