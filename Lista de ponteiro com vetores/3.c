/*Faça uma função em C chamada range que retorna a diferença entre o maior e o menor valor de um vetor*/
#include <stdio.h>

int range(int *vet,int n);

int main() 
{
  int vet[6] = {11, 12, 11, 3, 12, 13};
	int x;

	x = range(vet, 6);

	printf("O range é: %d",x); 
  // A saída é 10 porque 13 – 3 = 10.
  return 0;
}
int range(int *vet,int n)
{
  int i,maior=0,menor=9999,diminuir=0;

  for(i=0;i<n;i++)
  {
    if(vet[i]>maior)
    {
      maior=vet[i];
    }
    if(vet[i]<menor)
    {
      menor=vet[i];
    }
  }

  diminuir=maior-menor;

  return diminuir;
}
