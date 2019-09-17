/*5-Escreva uma função potenciaInt(base, expoente) que retorne o valor de baseexpoente. Não use nenhuma das funções da biblioteca matemática.*/
#include <stdio.h>

int potenciaInt(int base,int expoente);

int main() 
{
  int base,expoente,x;

  printf("Informe a base: ");
  scanf("%d",&base);

  printf("Informe o expoente: ");
  scanf("%d",&expoente);

  x=potenciaInt(base,expoente);

  printf("O resultado e : %d",x);

  return 0;
}
int potenciaInt(int base,int expoente)
{
  int i;
  int mul=1;

  for(i=0;i<expoente;i++)
  {
    mul=mul*base;  
  }

  return mul;
}
