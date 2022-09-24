#include<stdio.h>
#include<string.h>
void upperCase(char s[100]){
	printf(" UpperCase: %s ",strupr ( s));
}


int main() {
    char s1[100];
    printf("\n Enter string: ");
    gets(s1);
    upperCase(s1);
    return 0;
}


