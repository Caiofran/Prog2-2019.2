/*Escreva um programa em C que leia do usuário um valor n e imprima uma tabela de 
multiplicação n por n. Quando executado, seu programa deve ter a seguinte aparência:*/
#include <stdio.h>
//nao esta certo
int main() 
{
  int i,j,resul=0,n;
  char r;
  
  printf("Insira um número e eu computarei uma tabela de multiplicação para você:");
  scanf("%d",&n);

  printf("\nVocê digitou %d. Aqui está a tabela de multiplicação\n\n",n);

 

  for(i=1;i<=n;i++){
    
    for(j=1;j<=n;j++){
      resul=resul+i;
      printf("%d \t",resul);
      
    }printf("\n");
    resul=0;    
  }

  printf("\n\nestá feliz?(s/n)");
  scanf(" %c",&r);

  return 0;
}
