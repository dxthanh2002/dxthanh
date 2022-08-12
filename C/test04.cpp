#include<stdio.h>
#include<string.h>
int main(){
	char s1[20];char s2[20];
	printf("\n Nhap s1: ");scanf("%s",&s1);
	printf("\n Nhap s2: ");scanf("%s",&s2);
	
	
	printf("\n Nhap s1: %s",&s1);
	printf("\n Nhap s2: %s",&s2);
	
	strcat(s1,s2);
	printf("\n Nhap s1: %s",&s1);
	printf("\n Nhap s2: %s",&s2);
	
}


