#include<stdio.h>
#define tam 3
/*
1 4 5
4 2 6
5 6 3
*/
int main()
{
	int mat[tam][tam];
	int i,j;
	int achou=0;
	
	for(i=0;i<tam;i++)
	{
		for(j=0;j<tam;j++)
		{
			printf("Informe um numero: ");
			scanf("%d",&mat[i][j]);
		}
		printf("\n");
	}	
	for(i=0;i<tam;i++)
	{
		for(j=0;j<tam;j++)
		{
			if(mat[i][j] != mat[j][i])
			{
				achou=1;
			}
		}
	}
	
	if(achou == 1)
	{
		printf("\nEhhhh simetrica");
	}
	else
	{
		printf("\nNao eh simetrica");
	}
	
	return 0;
}
