#include<stdio.h>
int main(){
	printf(" Hello World!");
	//input num
	int num;
	printf("\n nhap number:");scanf("%d",&num);
	int r;
	r = num % 2; // r = num mod 2
	
	if ( r==0){
		printf(" Day la so chan");
		
	}else{
		
		printf(" Day la so le");
		
	}
	
}
