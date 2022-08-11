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
int t =0;
for(int i=0;i<n;i++)
{
	if(a[i]>0){
		t =a[i];
		break;
	}
	
}
if(t==0)
	{
		printf("Mang k co so duong nao ca");
	}
}
