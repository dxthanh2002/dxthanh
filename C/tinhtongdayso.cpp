#include<stdio.h>
int main(){
int tong = 0;
int i=1;
int n;
printf("\n nhap n:=");scanf("%d",&n);

while(i<=n){
	tong = tong + i;
	i++;
}
printf("tong day so la: %d",tong);
}


