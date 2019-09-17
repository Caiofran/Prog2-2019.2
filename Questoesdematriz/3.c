/*3. Faça um programa que verifica se alguém ganhou um jogo da velha.  O programa vai 
ler uma matriz 3x3, onde cada posição representa uma das casas do tabuleiro.  
A matriz pode conter os valores  -1, 0, 1  que representam:
    - uma peça do jogador A(   **1**   )
    - uma casa vazia do tabuleiro (  **0**  )
    - uma peça do jogador B (  **-1**   )*/
#include<stdio.h>
#define tam 3 

int main()
{
	int mat[tam][tam];
	int i,j;
	
	for(i=0;i<tam;i++)
	{
		for(j=0;j<tam;j++)
		{
			printf("Digite 1 0 -1: ");
			scanf("%d",&mat[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<tam;i++)
	{
		for(j=0;j<tam;j++)
		{
			if(i==j)
			{
				mat[i][j]=0;
				// estou na diagonal principal
			}
			if(j>i)
			{
				// estou em um valor acima da diagonal principal
				mat[i][j]=1;
			}
			if(j<i)	
			{
				// estou em um valor baixo da diagonal principal
				mat[i][j]=-1;
			}
		}
	}
	
	for(i=0;i<tam;i++)
	{
		for(j=0;j<tam;j++)
		{
			printf(" %d",mat[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

