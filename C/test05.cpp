#include<stdio.h>
#include<string.h>
int main(){
char s[20];
printf("\n Nhap day: ");scanf("%s",&s);


for(int i=0;i<20;i++){
	if(s[i]>=97 && s[i]<=122){
	
	s[i] = s[i]-32;
}
}
printf("\n %s",&s);
}


