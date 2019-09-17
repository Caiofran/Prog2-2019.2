/*1. Em um campeonato de futebol existem cinco times e cada time possui onze jogadores. 
Faça um programa que receba a idade, o peso e a altura de cada um dos jogadores, calcule e mostre: 
a) a quantidade de jogadores com idade inferior a 18 anos; 
b) a média das idades dos jogadores de cada time; 
c) a média das alturas de todos os jogadores do campeonato; e 
d) a porcentagem de jogadores com mais de 80 quilos entre todos os jogadores do campeonato.*/
#include<stdio.h>
#define tam 2 // tamanho do time
#define tam1 2 // tamanho dos jogadores
int main()
{
	float peso,altura;
	int i,j,idade;
	int cont_jogadores=0,cont_peso;
	float somaidade,somaaltura,mediaidade,mediaaltura;
	
	for(i=0;i<tam;i++)
	{
		printf("Time [%d]\n",i+1);
		for(j=0;j<tam1;j++)
		{
			printf("Informe a idade: ");
			scanf("%d",&idade);
			
			printf("Informe o peso: ");
			scanf("%f",&peso);
			
			printf("Informe a altura: ");
			scanf("%f",&altura);
			
			printf("\n");
			
			if(idade<18)//a quantidade de jogadores com idade inferior a 18 anos; 
			{
				cont_jogadores++;
			}
			somaidade+=idade;
			somaaltura+=altura;			
			
			
			if(peso>=80)
			{
				cont_peso++;
			}
		}
		
		mediaidade=somaidade/tam1;
		printf("B)Media de idades do time: %.2f\n",mediaidade);
		somaidade=0;
	}
	mediaaltura=somaaltura/tam1;
	
	printf("\nSoma das idades: %.2f\n",somaidade);
	printf("Soma das alturas: %.2f\n",somaaltura);
	
	printf("\nA)Jogadores a abaixo de 18 anos: %d\n",cont_jogadores);
	
	printf("C)Media de alturas: %.2f\n",mediaaltura);
	
	return 0;
}
