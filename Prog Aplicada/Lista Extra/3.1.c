#include <stdio.h>
/*3. Escreva um algoritmo que recebe um vetor de 10 elementos e depois disso 
analisa o vetor, emitindo a mensagem adequada: (a) O vetor est� em ordem crescente 
(b) O vetor est� em ordem decrescente (c) O vetor n�o est� em ordem*/
int main() 
{
  int vet[10],i,cont=0,igual=0; 

  for(i=0;i<10;i++)
  {
    printf("entre com um numero:");
    scanf("%d",&vet[i]);
    
	if(vet[i]<vet[i-1])
	{
      cont--;
      printf("\n%d",cont);
    }
    else if(vet[i]>vet[i-1])
	{
      cont++;
      printf("\n%d",cont);
    }
    else
      igual++;
     // printf("\n%d i",igual);
    
  }
  if(cont==10)
  {
    printf("\nta em ordem crescente");
  }
  else if(cont<=-8)
  {
    printf("\nta em ordem decrescente");
  }
  else 
  printf("\nt� uma bagun�a");

  

  return 0;
}
