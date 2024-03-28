#include <stdio.h>
#include<string.h>
int main() {
    char first[10], last[10], fullname[20];
    printf("Input your first name: ");
    gets(first);
    printf("Input your last name: ");
    gets(last);
    
    strcpy(fullname, first); 
    strcat(fullname, " ");
    strcat(fullname, last);
    
    printf("\nYour full name: %s", fullname);
    strrev(fullname);
    printf("\nReverse of the string: %s", fullname);
    return 0;
}
