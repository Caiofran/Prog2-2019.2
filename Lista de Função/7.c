/*7-Faça uma função que receba um valor inteiro e positivo, calcule e retorne o seu 
fatorial. Construa um programa que utilize essa função.*/
#include <stdio.h>

int numeroFatorado(int num);

int main() 
{
  int x,num;  

  printf("Digite o numero para ser fatorado: ");
  scanf("%d",&num);
  
  x=numeroFatorado(num);

  printf("O numero fatorado e: %d",x);

  return 0;
}

int numeroFatorado(int num)
{
  int i,mul=1;

  for(i=1;i<num;i++)
  {
    mul=mul*i;
  }

  mul=mul*num;

  return mul;
}
