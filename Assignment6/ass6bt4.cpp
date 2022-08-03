#include<stdio.h>
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
	scanf("%d",&a[i]);
	
}
for(i=n-1;i>=0;i--){
	if( a[i]%2 !=0 ){
		printf(" so le cuoi cung trong mang la: %d",a[i]);
		break;
	}
}
}

