#include<stdio.h>
int main(){
int a[100];
a[0]=1;
a[1]=1;
for(int i=2;i<100;i++)
{
	a[i]= a[i-1]+a[i-2];
	
}
int n,vt;
int x;
printf("\n Nhap n:");scanf("%d",&n);
for(int i=0;i<100;i++){
	vt++;
	if( a[i]==n){
		x=1;
	break;	
}
}

if( x==1){

printf("N nam o vi tri thu %d",vt);
}else{
	printf("\n So k nam trong day");
}
}


