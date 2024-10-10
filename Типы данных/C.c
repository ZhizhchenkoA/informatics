#include <stdio.h>

int isDigit(char c){
    return ('0' <= c && c <= '9');
};

int main(){
    char c;
    scanf("%c", &c);
    if (isDigit(c))
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}