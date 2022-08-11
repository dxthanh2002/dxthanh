#include<stdio.h>
#include<math.h>
int main(){
int n;
printf("\n Nhap n:  ");scanf("%d",&n);
if(n<2){
	printf("\n n k phai so nguyen to");
	
}
int a;
for(int i=2;i<=sqrt(n);i++){
	if(n%i==0){
		a ++;
	}
}
if(a==1){
	printf("\n k phai so nguyen to");
}else{
	printf("\n n la so nguyen to");
}
}


