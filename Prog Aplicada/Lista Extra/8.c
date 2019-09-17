/*Faça um programa que leia um vetor de 15 posições e o compacte, ou seja, elimine as
posições com valor zero. Para isso, todos os elementos á frente do valor zero, devem 
ser movidos uma posição para trás no vetor.*/
#include <stdio.h>
#define tam 5

int main() 
{
  int vet[tam],i,j,trocar,cont=0;

  //recebendo os valores
  for(i=0;i<tam;i++)
  {
    printf("entre com um valor:");
    scanf("%d",&vet[i]);
  }
  
  for(i=0;i<tam;i++)
  {
      printf("%d ",vet[i]);
  }  
  
  printf("\n\n");
  
  //ordenando o vetor
  for(i=0;i<tam;i++)
  {
    if(vet[i]==0)
	{
      for(j=i;j<4;j++)
	  {
       vet[j]=vet[j+1];
      }
    vet[j]=0;//colocando na ultima posição o vet de valor 0
      }
  }
  
  printf("\n\n");

  for(i=0;i<5;i++)
  {
    if(vet[i]!=0)
	{
      printf("%d ",vet[i]);
    }
  }  

  return 0;
}
