/*3. Dado um número inteiro N maior que 1, crie um algoritmo que imprima na tela todos os divisores deste valor. Exemplo:

*** Entrada ***
Digite o valor de N: 12

*** Saída ***
1 divide 12 
2 divide 12 
3 divide 12
6 divide 12 
12 divide 12
*/
#include<stdio.h>

int main()
{
	int n,i;
	
	printf("Digite o valor de N: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("%d divide %d\n",i,n);
		}
	}
	
	return 0;
}
