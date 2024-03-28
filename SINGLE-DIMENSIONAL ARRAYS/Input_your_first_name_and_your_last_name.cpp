#include <stdio.h>
int main() {
    char first[10], last[10], fullname[20];
    printf("Input your first name: ");
    gets(first);
    printf("Input your last name: ");
    gets(last);
    
    printf("Your name: %s %s", first, last);
    
    return 0;
}
