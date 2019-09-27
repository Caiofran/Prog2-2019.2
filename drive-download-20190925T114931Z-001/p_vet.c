#include <stdio.h>

int main()
{
	int vet[10];
	int *p=&vet;
	int i;
	
	printf("\nendereco de vet = %d", &vet);
	printf("\nendereco de vet[0] = %d", &vet[0]);
	printf("\nendereco de vet[1] = %d", &vet[1]);
	
	//Usando ponteiro, faça um codigo para inicalizar TODOS os valores dos vetores com 0
	for(i=0;i<10;i++)
		*p++=0;
	
	
}
