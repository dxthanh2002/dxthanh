//Cho m?ng  n s? nguyên, h?y t?m ðo?n [a, b] trên tr?c s? nguyên sao cho ðo?n này ch?a t?t c? các giá tr? trong m?ng
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
