/*Escreva um programa em C que leia do usu�rio um valor n e imprima uma tabela de 
multiplica��o n por n. Quando executado, seu programa deve ter a seguinte apar�ncia:*/
#include <stdio.h>
//nao esta certo
int main() 
{
  int i,j,resul=0,n;
  char r;
  
  printf("Insira um n�mero e eu computarei uma tabela de multiplica��o para voc�:");
  scanf("%d",&n);

  printf("\nVoc� digitou %d. Aqui est� a tabela de multiplica��o\n\n",n);

 

  for(i=1;i<=n;i++){
    
    for(j=1;j<=n;j++){
      resul=resul+i;
      printf("%d \t",resul);
      
    }printf("\n");
    resul=0;    
  }

  printf("\n\nest� feliz?(s/n)");
  scanf(" %c",&r);

  return 0;
}
