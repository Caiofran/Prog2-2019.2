#include <stdio.h>

int somaValores(int val1,int val2);

int main() 
{
  int num1,num2;
  int x;

  printf("Digite o primeiro numero:");
  scanf("%d",&num1);

  printf("Digite o segundo numero:");
  scanf("%d",&num2);

  x = somaValores(num1,num2);

  printf("O resultado da soma e %d",x);

  return 0;
}

int somaValores(int val1,int val2)
{
  int resposta;
  int i;

  for( i=val1;i<=val2;i++)
  {
    resposta = i + resposta;
  }
  return resposta;
}
