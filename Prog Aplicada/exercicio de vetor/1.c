/*1) Crie um programa que lê 50 números reais fornecidos pelo usuário e organiza em 2 vetores da seguinte forma: Primeiro um vetor chamado pares armazena apenas números pares e um vetor chamado impares que armazena apenas números impares. Ao final do programa, informe se existem mais números pares do que impares.*/
#include <stdio.h>
#define tam 5

int main() 
{
   int vet[tam],vetpar[tam],vetimpar[tam];
   int i,j=0,k=0;

   for(i=0;i<tam;i++)
   {
     printf("Digite um vetor: ");
     scanf("%d",&vet[i]);
   }

   for(i=0;i<tam;i++)
   {
     if(vet[i]%2==0)
     {
       vetpar[j++]= vet[i];
     }
     else
     {
       vetimpar[k++]=vet[i];
     }
   }

   printf("\n\nVetor Par: ");

  for(i=0;i<j;i++)
  {
    printf("%d ",vetpar[i]);
  }

  printf("\n\nVetor impar: ");

  for(i=0;i<k;i++)
  {
    printf("%d ",vetimpar[i]);
  }

  return 0;
}
