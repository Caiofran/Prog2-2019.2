/*1. Fa�a um programa que leia a nota de prova de 15 alunos e gere a m�dia da turma. 
Depois, calcule e mostre quantos alunos ficaram acima da m�dia da turma.*/
#include<stdio.h>
#define tam 4

int main()
{
	float alunos[tam];
	int cont=0;
	int i;
	float soma,media;
	
	for(i=0;i<tam;i++)
	{
		printf("Digite a nota da prova: ");
		scanf("%f",&alunos[i]);
		
		soma+=alunos[i];
		media=soma/tam;
	}
	printf("\nMedia da turma: %.2f",media);
	
	for(i=0;i<tam;i++)
	{
		if(alunos[i]>=media)
		{
			cont++;
		}
	}
	
	printf("\nAlunos acima da media: %d",cont);
	return 0;
}
