/*1 - Fa�a um programa que l� um n�mero inteiro e mostre na tela a soma de seus d�gitos.
Por exemplo: o n�mero 5987 deve retornar 5+9+8+7 = 29*/
#include<stdio.h>

int main() 
{
  int num, i, soma=0;
  int resto;

  printf("Entre com um numero inteiro:");
  scanf("%d", &num);

  while (num>0)
  {
    resto=num%10;
    num=num/10;
    soma=soma+resto;
  }

  printf("%d\n", soma);

  return 0;
}
