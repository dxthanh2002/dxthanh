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
	for(int i=0;i<n;i++){
		if(a<arr[i]){
			a=arr[i];	
		}

	}
	printf("Doan can tim la : [%d,%d]",-a,a);
}
