#include<stdio.h>
int main(){
 int a,b,c;
 printf("\n nhap so thu nhat a=");scanf("%d",&a);
 printf("\n nhap so thu hai b=");scanf("%d",&b);
 printf("\n nhap so thu ba c=");scanf("%d",&c);
 
 if( a>b){
 	if( a>c){
 		printf("max = %d ",a);
	 }
 }else if(b>c){
 	printf(" max = %d",b);
 }else{
 	printf(" max = %d",c);
 }
 
 
}


