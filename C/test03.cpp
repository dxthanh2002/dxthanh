#include<stdio.h>
/*
int main(){
for(int i=0;i<3;i++){
	for(int j=0;j<5;j++)
	printf(" *");
	printf("\n");
}
printf("\n");
} */
/*
int main(){
	for(int i=0;i<5;i++)
	{
			for(int j=0;j<=i-1;j++)
			printf("*");
			printf("\n");
	}
	printf("\n");
}
*/
int main(){
	for(int i=1;i<=5;i++){
		for(int j=1;j<=4;j++){
			printf("* ");
			if(i%2 !=0)
			printf("*");
		}
		printf("\n");
	}
	
}
