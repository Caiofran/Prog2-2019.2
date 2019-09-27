/*2-Escreva uma função de C chamada somaNegativos que retorna a soma de todos os 
elementos negativos em um vetor de inteiros. */
#include <stdio.h>

int somaNegativos(int *vet,int n);

int main() 
{  
  int vet[6] = {-5, -4, 1, 3, 2, -3};
	int x;

	x = somaNegativos(vet, 6);

	printf("A soma dos negativos e: %d",x);

  return 0;
}
int somaNegativos(int *vet,int n)
{
  int i,soma=0;

  for(i=0;i<n;i++)
  {
    if(vet[i]<0)
    {
      soma+=vet[i];
    }
  }

  return soma;
}
