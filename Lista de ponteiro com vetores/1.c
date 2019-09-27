/*1. Faça uma função imprimeVetor() que recebe como parâmetros um ponteiro para o vetor e o tamanho do vetor e imprime ele na tela.*/
#include <stdio.h>
#define tam 4

void imprimeVetor(int *vet, int n);

int main() 
{
  int i,vet[tam];

  for(i=0;i<tam;i++)
  {
    printf("Digite um valor: ");
    scanf("%d",&vet[i]);
  }

  imprimeVetor(vet,tam);

  return 0;
}
void imprimeVetor(int *vet, int n)
{
  int i;

  printf("\nVetor:\n");
  for(i=0;i<n;i++)
  {
    printf("%d ",vet[i]);
  }
}
