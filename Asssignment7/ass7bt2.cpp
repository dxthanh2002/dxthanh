#include<stdio.h>
#include<math.h>
int main(){
int n,i;
do{

printf("\n Nhap vao so phan tu cua mang: ");scanf("%d",&n);
if(n<1){
	printf("\n Nhap lai gia tri cua n: ");
}
}while(n<1);
int a[n];
for(i=0;i<n;i++){
	printf("Nhap phan tu a[%d]: ",i);
	scanf("%d",&a[i]);}
	
	int x,t,min =0;
	printf("\n Nhap gia tri x:");scanf("%d",&x);
	min =x;
	for(i=0;i<n;i++){
		t= abs(a[i]-x);
		if(t<=min){
			min=t;
		}
	}
	printf("\n khoang cach lon nhat cua x la: %d",min);
	
}
