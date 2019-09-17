#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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
	int s=1;
	for(i=0;i<tam;i++)
	{
		for(j=0;j<tam;j++)
		{
			printf("Matriz [%d][%d]: ",i,j);
			scanf("%d",&mat[i][j]);
		}
		printf("\n");
	}
	printf("\n");
		for(i=0;i<tam;i++)
		{
			for(j=0;j<tam;j++)
			{
				//printf("Matriz [%d][%d] = %d \t ",i,j,mat[i][j]);
				printf(" %d",mat[i][j]);
			}
			printf("\n");
		}
	for(i=0;i<tam;i++)
	{
		for(j=0;j<tam;j++)
		{
			if(mat[i][j] != mat[j][i])
			{
				s = 0;
				printf("Nao eh simetrica");
				exit(0);
			}
		}
	}
	
	printf("Ehhhh simetrica");

	return 0;
}
