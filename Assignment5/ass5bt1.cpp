#include<stdio.h>
int main(){
	int n;
	do
	{
		printf("Nhap gia tri cua n:");scanf("%d",&n);
		if(n<1)
		{
			printf("Nhap lai n:");
		}
	}while(n<1);
	int tong = 0;
	printf("\n Cac uoc cua %d la:",n);
	for(int i=1;i<=n;i++){
		if(n%i==0){
			printf("%5d",i);
			tong = tong + i;
		}
	}
	printf("\nTong cac uoc cua n la: %d",tong);
}
