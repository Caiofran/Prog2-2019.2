/*1. Leia uma matriz 5 x 5. Leia tamb�m um valor X. O programa dever� fazer uma busca desse valor na matriz e, 
ao final, escrever a localiza��o (linha x coluna) ou uma mensagem de �n�o encontrado�.*/
#include<stdio.h>
#define tam 2
//acho que esta certo
int main()
{
	int i,j,x;
	int mat[tam][tam];
	int posi=0,posj=0;
	int achou;
	
	for(i=0;i<tam;i++)
	{
		for(j=0;j<tam;j++)
		{
			printf("Digite um valor: ");
			scanf("%d",&mat[i][j]);
		}
		printf("\n");
	}
	
	printf("\nInforme o valor de x: ");
	scanf("%d",&x);
	printf("\n");printf("\n");
	for(i=0;i<tam;i++)
	{
		for(j=0;j<tam;j++)
		{
			printf(" %d",mat[i][j]);
			
			if(x==mat[i][j])
			{
				achou=1;
				posi=i;
				posj=j;	
			}
		}
		printf("\n");
	}
	
	if(achou==1)
	{
		printf("\nEsta na linha: %d e na coluna: %d",posi,posj);
	}
	else{
		printf("\nNao encontrado");
	}
	
	return 0;
}
