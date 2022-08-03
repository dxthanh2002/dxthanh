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
int x;
printf("\n Nhap mot so x: ");
scanf("%d",&x);
for(i=0;i<n-1;i++)
{
	if( a[i]==x ) {
		printf("So x nam trong mang ");
	
	}
	
}
}


