#include<stdio.h>
int main(){
int n;
printf("Nhap n =");
scanf("%d",&n);
int i=1,max=0;
while(i<n){
	if(i%2==0&&i%3==0){
		max = i;
		
	}
	i++;
}
printf("\n Gia tri can tim la:%d",max);
}


