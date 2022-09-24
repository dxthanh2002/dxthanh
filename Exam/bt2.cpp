#include<stdio.h>
#include<string.h>

void upperCase(char s[100]) {
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] -= 32;
        }
    }
    printf("%s\n", s);
}

int main() {
    char s1[100];
    scanf("%s", s1);
    upperCase(s1);
    return 0;
}


