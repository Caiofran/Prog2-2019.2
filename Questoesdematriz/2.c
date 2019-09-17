/*2. Faça um programa para corrigir uma prova com 5 questões de múltipla escolha 
(a, b, c, d ou e), em uma turma com 3 alunos. 
Cada questão da prova vale 1 ponto. 
Ao final, mostre a pontuação dos 3 alunos.*/
#include<stdio.h>

int main()
{
	int ponto = 0;
	int i,j;
	char mat[3][5],gab[5];
	
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=5;j++)//ver como esse for esta funcionando
		{
     		 printf("Digite a resp da questao %d do aluno %d: ",j,i);
      		scanf(" %c",&mat[i][j]);
    	}
    	printf("\n");
  	}
  	
  	printf("Digite o gabarito:\n");
	for(i=1;i<=5;i++)
  	{
  		printf("Questao[%d]: ",i);
  		scanf(" %c",&gab[i]);
	}
	
	for(i=1;i<=3;i++)
	{	
		for(j=1;j<=5;j++)
		{
			if(mat[i][j]==gab[j])
			{
				ponto++;
			}
		}
		printf("O aluno %d teve %d pontos\n",i,ponto);
	}
	
	return 0;
}
