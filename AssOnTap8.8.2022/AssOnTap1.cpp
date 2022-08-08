#include<stdio.h>
int main(){
	
int n;
float S =0;

do{

printf("\n Nhap n: ");scanf("%d",&n);
if (n<1)
{
	printf("\n moi ban nhap lai:");
}
}while(n<1);
printf("%d",n);
 for(int i = 1; i <= n; i++){
    S = S + 1.0 / i;
  }
printf("\n Tong 1+1/2+ 1/3+.... la :  %.2f",S);
}


