#include<stdio.h>
int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
    int ary[n];
    int i, total, high,high2;
    for(i=0; i<n; i++)
    {
		scanf("%d",&ary[i]);
	}
    /* Displays highest of the entered values */
    high = ary[0];
    
    high2 = ary[0];
    for(i=1; i<n; i++)
    {
        if(ary[i] > high){
	
            high = ary[i];}
    }
    for()
	
    printf("\nSo lon nhat la: %d", high);
    printf("\n So lon thu 2 la:%d",high2);

}




