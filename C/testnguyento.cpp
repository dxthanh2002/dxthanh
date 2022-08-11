#include<stdio.h>
bool kT(int n){
	if(n<2){
		return false;
	}
	int dem =0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			dem++;
		}
	}
	if(dem==2){
		return true;
	}else{
		return false;
	}
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


