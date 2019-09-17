#include<stdio.h>
#include<string.h>

int main()
{
	int i,j;
	char mat[3][5];
	
	for(i=1;i<=3;i++)
	{
		for(j=1;i<=5;j++)
		//for(j=1;j<=5;j++)
		{
			printf("Digite a resp da questao %d do aluno %d: ",j,i);
      		scanf(" %c",&mat[i][j]);
		}
	}
  	
  	return 0;
}
