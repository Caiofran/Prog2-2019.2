/*Crie um programa para determine o tamanho t da maior sequ�ncia de n�meros iguais
em um vetor A (lido do usu�rio). Exemplo: Supor que sejam armazenados os seguintes 
valores paran o vetor A: [1,1,6,6,7,7,7,7,1,1,1], ent�o t=4.*/
#include <stdio.h>
#define tam 11

int main() 
{
  int vet[tam],j=0,t=0,i=0,n,t1=0,p[10];
  int res;

  //tirando o lixo
    for(i=0;i<tam;i++)
	{
      vet[i]=0;
    }
  
  //pegando os valores
  do
  {
    printf("entre com um valor:");
    scanf("%d",&vet[i]);

    do
	{
      j=0;

      for(i=0;i<tam;i++)
	  {
        if(vet[i]==i)
		{
            p[i]++;
        }
      }
      //verificar se o valor de i � igual a algum j� citado antes 
      for(i=0;i<tam;i++)
	  {
	      //maior vez que um n�mero foi repetido
	      if(p[i]>t)
		  {
	        t=p[i];
	      }
      }
     j=1;
    }
	while(j==0);
    
  	//continuar ou n a repeti��o
    printf("gostaria de continuar?(1 para sim/2 para n�o):");
    fflush(stdin);
    scanf("%d",&res);
    i++;
   
    
  }
  while(res==1);

  
  printf("\n ent�o t:%d",t);

  return 0;
}
