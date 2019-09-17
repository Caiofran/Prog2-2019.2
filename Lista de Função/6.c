/*6-Elabore uma fun��o que receba 2 n�meros inteiros a e b e um caracter
c. A fun��o deve imprimir uma "moldura" de tamanho a x b, feita usando
um caracter c e devolver o n�mero de caracteres impressos. O programa
deve executar a fun��o e imprimir seu valor de retorno.*/
#include <stdio.h>

void printMoldura(int larg, int alt, char ch);

int main()
{
	int val1, val2;
	char chTela;

	printf("Digite o valor de largura: ");
	scanf("%d",&val1);

	printf("Digite o valor da altura: ");
	scanf("%d",&val2);
	
	printf("Digite o char para impressao da moldura: ");
	scanf(" %c",&chTela);
	
	printMoldura(val1,val2,chTela);
	
	return 0;
}
 
void printMoldura(int larg, int alt, char ch)
{
  int i, j;
  
  printf("\n");
  
	for(i=0;i<alt;i++)
	{
		for(j=0;j<larg;j++)
		{
			// vamos fazer a moldura sem estar preenchida.
			// Para isso precisamos imprimir o char apenas nas bordas 
			if(i == 0 || i == alt-1  || j == 0 || j == larg-1)
			{
				printf("%c ",ch);
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}

}
