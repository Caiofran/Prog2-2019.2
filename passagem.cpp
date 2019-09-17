#include <stdio.h>
#include <stdlib.h>
#define d 2
int main()
{
	int mat[d][d];
	int i,id=0,j;
	int num=0;
	
	for(i=0;i<d;i++)
	{
		for(j=0;j<d;j++)
		{
			printf("Informe numero do voo[%d][%d]: ",i,j);
			scanf("%d",&mat[i][j]);	
			printf("Informe lugar disponivel [%d][%d]: ",j,i);
			scanf("%d",&mat[j][i]);
			}
	}
	printf("Informe ID ou 9999 para sair: ");
	scanf("%d",&id);
	
		while(id != 9999)
		{
			printf("Informe numero do voo desejado:");
			scanf("%d",&num);
			int achei =0;
			
			for(i=0;i<d;i++)
			{
			for(j=0;j<d;j++)
			{
				if(mat[i][j] == num)
				{ 
					achei = 1;
					if(mat[j][i] > 0)
					{
						
						mat[j][i]--;
						printf("Reserva feita \n");
						printf("Restao %d vagas\n",mat[j][i]);
					}
					else
					{
						printf("voo lotado\n");
					}
				}
				if(achei == 0)
					{
					
						printf("Voo nao existe \n");
					}
		
			}	
		}
		
			printf("Informe ID ou 9999 para sair: ");
			scanf("%d",&id);	
		}	
	
	system("pause<NULL");
	return 0;
}
