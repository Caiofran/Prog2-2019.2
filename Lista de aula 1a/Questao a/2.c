/*2. Faça um programa para ler 15 temperaturas, calcule e imprima a média geral.*/
#include<stdio.h>
#define tam 4

int main()
{
	int temp[tam],media,soma;
	int i;
	
	for(i=0;i<tam;i++)
	{
		printf("Informe uma temperatura: ");
		scanf("%d",&temp[i]);
		
		soma+=temp[i];
		media=soma/tam;
	}
	
	printf("A media geral e: %d",media);
	
	return 0;
}
