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
int x,t;
printf("\n Nhap mot so x: ");
scanf("%d",&x);
for(i=0;i<n;i++)
{
	if( a[i]==x ) {
		printf("So x nam trong mang ");
	t ++;
	break;
	}
	
	}
	if( t==0){
		printf("\n khong co so can tim trong mang");
}
}


