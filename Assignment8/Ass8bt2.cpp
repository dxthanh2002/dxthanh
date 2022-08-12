#include<stdio.h>
int Tongtachra(int n){
	int x,y=0;
	while(n!=0){
		x=n%10;
		y=x +y;
		n = n /10;
	}
	return y;
}
int main(){
	int x;
	printf("\n Nhap x:  ");scanf("%d",&x);
	int y= Tongtachra(x);
	printf("\n tong cac so tach ra tu n la: %d",y);

}


