/*1- Escreva um programa em C que leia um numero n e exiba o seguinte padrão:
Para n=4*/
#include <stdio.h>

int main( )
{
  int i, j,n;

  printf("Informe o valor de n: ");
  scanf("%d",&n);
  
  for(i=0;i<n+1;i+=1)
  {
    for(j=0;j<i;j+=1)
    {
      printf( "%d",i);
    }
    printf("\n");
  }

  return 0;
}
