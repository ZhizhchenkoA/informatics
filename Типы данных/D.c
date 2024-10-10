#include <stdio.h>



int main(){
    char c;
    scanf("%c", &c);
    if (c >= 'a' && c <= 'z')
        c = c - 'a' + 'A';
    else if (c >= 'A' && c <= 'Z')
        c = c -'A' + 'a';
    printf("%c\n", c);
    return 0;
}