#include<stdio.h>
int UCLN(int a,int b){
	while(a !=b){
		if(a>b){
			a = a-b;
		}else if(b>a){
			b = b-a;
		}
		}
		return a;
	}

int main(){
int x,y;
	printf("\n Nhap x:  ");scanf("%d",&x);
	printf("\n Nhap y:  ");scanf("%d",&y);
	int u = UCLN(x,y);
	printf("\n Uoc chung lon nhat la:  %d",u);
	printf("\n Boi chung nho nhat la: %d",(x*y)/u);
}
