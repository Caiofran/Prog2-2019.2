#include <stdio.h>
/*2. Escreva um programa em C que leia uma string e um caractere. 
Retirar o caractere informado da string. Escrever a string modificada.*/
int main() 
{
  char notas[3][5];
  char gab[5];
  int cont=0;

  //ler a matriz
  for(int i=0;i<3;i++)
  {
    printf("Aluno [%d]\n",i);
    for(int j=0;j<5;j++)
    {
      printf("Digite a questao %d: ",j);
      scanf(" %c",&notas[i][j]);
    }
  }

  //ler gabarito
  printf("Digite o gabarito: \n");
  for(int i=0;i<5;i++)
  {
    printf("Questão %d: ",i);
    scanf(" %c",&gab[i]);
  }

  for(int i;i<3;i++)
  {
    for(int j=0;j<5;j++)
    {
      if(gab[j]==notas[i][j])
      {
        cont++;
      }
    }
    printf("O Aluno %d tirou %d\n",i,cont);
    cont=0;
  }

  return 0;
}
