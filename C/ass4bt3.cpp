#include<stdio.h>
int main()
{
  int n;
  
  do
  {
    printf("\nNhap vao so nguyen n lon hon 0: ");
    scanf("%d", &n);
  if(n <= 0)
  {
    printf("\n So n phai lon hon 0, vui long nhop lai !");
  }
  }while(n <= 0);

  printf("Cac uoc so cua %d la: ",n);
  for(int i = 1; i <= n; i++)
  {
    if(n % i == 0)
    {
      printf("%4d", i);
    }
  }
 
}
