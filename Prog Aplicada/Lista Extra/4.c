/*Escreva um algoritmo que recebe dois vetores A e B com 10 e 15 elementos 
respectivamente e encontra o maior elemento que está contido ao mesmo tempo 
nos dois vetores, ou imprime uma mensagem se não houver nenhum elemento em comum.
*/
#include <stdio.h>

int main() 
{
  
  int vetA[2],vetB[3],igual=0,maior=-1,i,j,cont=0;;

  for(i=0;i<2;i++)
  {
    printf("entre com um valor para vet A:");
    scanf("%d",&vetA[i]);
  }

  for(i=0;i<3;i++)
  {
    printf("entre com um valor para vet B:");
    scanf("%d",&vetB[i]);
  }

  
  for(i=0;i<3;i++)
  {
    for(j=0;j<2;j++)
	{ 
      
      if(vetB[i]==vetA[j])
	  {
        igual=vetB[i];
        cont++;
      }
      if(igual>maior)
	  {
        maior=igual;
      }
    } 

  }

  if(igual>0)
  {
    printf("\nos dois vetores tem %d valores iguais e o maior deles e:%d",cont,maior);
  }
  else
  printf("\nnao tem valores em igual.");


  return 0;
}
