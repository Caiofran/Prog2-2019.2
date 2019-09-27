/*Faça uma função chamada trocaMaior que recebe um ponteiro para um vetor e um tamanho n. A função deve  buscar o maior elemento de um vetor e trocar a posição do maior com o último elemento, que está em n.*/
#include <stdio.h>

void trocaMaior(int *vet,int n);
//acho que está certo
int main() 
{
  int vet[5] = {5,6,8,4,7};

  // colocar o maior valor na ultima posição
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
