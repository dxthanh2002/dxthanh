#include<stdio.h>
int main(){
int n;
printf("\n nhap so nam muon gui:");scanf("%d",&n);
int x=0;
int tk=4000    ;

 while(x<n)
 {
 	int ls=tk *8/100 ;
 	tk=ls+tk;
 	printf("tk nam thu %d la: %d\n",x+1,tk);
 	x++;
 }
}


