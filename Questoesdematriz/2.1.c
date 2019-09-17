#include <stdio.h>
/*2. Escreva um programa em C que leia uma string e um caractere. 

Retirar o caractere informado da string. Escrever a string modificada.*/
int main() 
{
  char notas[3][5];
  char gab[5];
  int cont=0;
  int i,j;
  //ler a matriz
  for(i=0;i<3;i++)
  {
    printf("\nAluno [%d]\n",i);
    for(j=0;j<5;j++)
    {
      printf("Digite a questao %d: ",j);
      scanf(" %c",&notas[i][j]);
    }
  }

  //ler gabarito
  printf("\nDigite o gabarito: \n");
  for(i=0;i<5;i++)
  {
    printf("Questão %d: ",i);
    scanf(" %c",&gab[i]);
  }

  for(i=0;i<3;i++)
  {
    for(j=0;j<5;j++)
    {
      if(gab[j]==notas[i][j])
      {
        cont++;
      }
    }
    printf("\nO Aluno %d tirou %d\n",i,cont);
    cont=0;
  }

  return 0;
}
