#include <stdio.h>

/*2. Faça um programa para corrigir uma prova com 5 questões de múltipla escolha 
(a, b, c, d ou e), em uma turma com 3 alunos. 
Cada questão da prova vale 1 ponto. 
Ao final, mostre a pontuação dos 3 alunos.*/

int main() 
{
	char mat[3][5],gab[5];
	int i,j;

	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
     		 printf("Digite a resp da questao %d do aluno %d: ",j+1,i+1);
      		scanf(" %c",&mat[i][j]);
    	}
  	}

  	printf("Digite o gabarito:\n");

  	for(i=1;i<=5;i++)
	  {
   	 	printf("Q%d: ",i);
    	scanf(" %c",&gab[i]);
  	  }

  // Funciona para todos os alunos
  
	  for(i=1;i<=3;i++)
	  {
	    int ponto = 0;
	    for(j=1;j<=5;j++)
		{
	      if (mat[i][j] == gab[j])
	        ponto++;
	    }
	    printf("O aluno %d teve %d pontos\n",i,ponto);
	  }


	  return 0;
}
