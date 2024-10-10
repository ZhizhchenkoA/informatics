#include <stdio.h>

int main() {
    char *s1;
    char *s2; 
    size_t len1 = 0, len2 = 0;   
    int i = 0, flag = 1; 
    getline(&s1, &len1, stdin);
    getline(&s2, &len2, stdin);
    for (i = 0; i < len1 && len1 == len2; ++i)
        flag *= (s1[i] == s2[i]);
    if (len1 == len2 && flag)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}