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
			printf("Digite um numero [%d][%d]: ",i,j);
			scanf("%d",&mat[i][j]);
		}
		printf("\n");
	}
	
	printf("Matriz: \n");
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
