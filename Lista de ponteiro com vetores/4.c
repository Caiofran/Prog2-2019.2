/*Fa�a uma fun��o chamada trocaMaior que recebe um ponteiro para um vetor e um tamanho n. A fun��o deve  buscar o maior elemento de um vetor e trocar a posi��o do maior com o �ltimo elemento, que est� em n.*/
#include <stdio.h>

void trocaMaior(int *vet,int n);
//acho que est� certo
int main() 
{
  int vet[5] = {5,6,8,4,7};

  // colocar o maior valor na ultima posi��o
  trocaMaior(vet,5);
  
  return 0;
}
void trocaMaior(int *vet,int n)
{
  int i,maior=0,tmp;

  for(i=0;i<n;i++)
  {
    if(vet[i]>maior)
    {
      maior=vet[i];
      tmp=vet[n-1];
      vet[n-1]=maior;
      vet[i]=tmp;
    }
  }

  for(i=0;i<n;i++)
  {
    printf("%d ",vet[i]);
  }
}
