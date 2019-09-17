/*1-Faça uma função que receba dois números positivos por parâmetro e
retorne a soma dos N números inteiros existentes entre eles.*/
#include <stdio.h>

int numSoma(int n1, int n2);

int main() 
{
  int num1,num2,x;
  
  printf("Digite o 1 valor: ");
  scanf("%d",&num1);
  
  printf("Digite o 2 valor: ");
  scanf("%d",&num2);

  x=numSoma(num1,num2);

  //printf("A soma dos dois valores e: %d",x);
	
  printf("A soma entre o numerose e: %d",x);	
		
  return 0;
}
/*
int numSoma(int n1, int n2)
{
    return n1 + n2;
}*/

int numSoma(int n1,int n2)
{
  int resposta;
  int i;

  for(i=n1;i<=n2;i++)
  {
    resposta = i + resposta;
  }
  return resposta;
}
