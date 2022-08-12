#include<stdio.h>
int TinhCV(int a,int b,int c)
{
	if(a+b>c&&a+c>b&&b+c>a){
	
	return a+b+c;
}else{
	return 0;
}
}
int main(){
int a,b,c;
printf("\n Nhap a: ");scanf("%d",&a);
printf("\n Nhap b: ");scanf("%d",&b);
printf("\n Nhap c: ");scanf("%d",&c);
int d= TinhCV(a,b,c);
if(d ==0){
	printf("\n 3 canh k tao thanh tam giac!");
}else{

printf("\n Chu vi tam giac la: %d",d);}
}


