//Cho m?ng  n s? nguy�n, h?y t?m �o?n [a, b] tr�n tr?c s? nguy�n sao cho �o?n n�y ch?a t?t c? c�c gi� tr? trong m?ng
#include <stdio.h>
int main(){	
	int n;
	printf("\nNhap so nguyen duong n = ");
	scanf("%d",&n);
	int arr[n],i;
	
	for(i=0;i<n;i++){
		printf("\nNhap a[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	int a=arr[0];
	int b=arr[0];
	for(int i=0;i<n;i++){
		if(a>arr[i]){
			a=arr[i];	
		}
		if(b<arr[i]){
			b=arr[i];
		}
	}
	printf("Doan can tim la : [%d,%d]",a,b);
}
