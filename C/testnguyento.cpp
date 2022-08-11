#include<stdio.h>
bool kT(int n){
	int c;
	for(int i=2;i<n;i++){
		if(n%i==0){
			c++;
		}
	}
	if(c==0)
	return true;
}
int main(){
int x;

printf("\n Nhap x: ");scanf("%d",&x);
if(kT(x)){
	printf("\n x la so nguyen to");
}else{
	printf("\n x k la so nguyen to");
}
}


