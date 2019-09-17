/*2- Escreva um programa em C que leia um numero n e exiba o seguinte padrão:
Exemplo: para n=5*/
#include <stdio.h>

int main() 
{
  int i, j,n,cont=1;

  printf("Informe o valor de n: ");
  scanf("%d",&n);
  
  for(i=0;i<n+1;i++)
  {
    for(j=0;j<n;j++)
    {
      
      if(j<i)
      {
        printf(" ");
      }
      else
      {
        printf("%d",cont);
        cont++;
      }
    }
    cont=1;
    printf("\n");
  }


  return 0;
}
