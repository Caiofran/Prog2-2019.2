/*3. Fa�a um programa que leia um vetor de 10 n�meros. Leia tamb�m um numero x.  
Mostre na tela a posi��o e os valores do vetor que s�o divis�veis por x.*/
#include<stdio.h>
#include<stdlib.h>
#define tam 10
//ler um vetor de 10 numeros
//ler x
// para i=0 ate 9 for
//verifica se x esta nessa posi��o if
/*se estiver incrementa um contador cont++

mostra o valor do contador printf
se o contador for 0 mostre "o valor x nao est� no vetor" if(cont == 0)
*/
int main()
{
	int vet[tam],i,x;

	for(i=0;i<tam;i++)
	{
		/*printf("Informe um numero [%d]: ",i+1);
		scanf("%d",&vet[i]);*/
		vet[i]=rand()%tam;
	}
	
	printf("\n");
	//mostrando o vetor
	for(i=0;i<tam;i++)
	{
		printf(" %d",vet[i]);
	}
	
	//lendo o valor de x
	printf("\n\nInforme um valor para x: ");
	scanf("%d",&x);

	//mostrando os valores que s�o divisiveis pelo x
	for(i=0;i<tam;i++)
	{
		if(vet[i]%x==0)
		{
			printf("Posicao:%d -> valor: %d\n",i,vet[i]);
			//printf("\n %d",i);
		}
	}
	
	return 0;
}
