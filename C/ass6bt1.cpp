#include<stdio.h>
int main(){
int n,i;
printf("\n Nhap so phan tu cua mang:");
scanf("%d",&n);
int a[n];
for( i=0;i<n;i++){
	printf("\n Nhap phan tu a[%d]:",i);
	scanf("%d",&a[i]);
}
int tong =0;
int so =0;
for(i=0;i<n;i++)
{
	if(a[i]%2 != 0){
		tong = tong + a[i];
		so ++;
	}

}
float tbc= float(tong)/so;
	printf("\n trung binh cong cac so le trong mang la : %3.2f",tbc);

}


