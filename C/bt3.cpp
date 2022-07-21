#include<stdio.h>
int main(){
 int a,b,c;
 printf("\n nhap so thu nhat a=");scanf("%d",&a);
 printf("\n nhap so thu hai b=");scanf("%d",&b);
 printf("\n nhap so thu ba c=");scanf("%d",&c);
 int max = a;
 if( b>max){
 	max =b;
 	if(c>max){
 		max =c;
	 }
 printf("so lon nhat la %d",max);
}
}


