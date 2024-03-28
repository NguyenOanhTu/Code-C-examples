#include <stdio.h>
int main() {
    char name[10];
    printf("Input your name: ");
    gets(name);
    printf("Hello %s", name);
    
    return 0;
}
