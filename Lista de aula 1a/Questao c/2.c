/*2. Escreva um programa em C que leia uma string e um caractere. Retirar o caractere informado da string. Escrever a 
string modificada.*/
#include<stdio.h>
#include<string.h>

int main()
{
	char nome[500];
	char remov;
	
	printf("Digite uma string: ");
	gets(nome);
	
	printf("Digite um caractere: ");
	scanf(" %c",&remov);
	
	int tam = strlen(nome);
	int i;
	
	for(i=0;i<tam;i++)
	{
    	if(nome[i] == remov)
		{
	      nome[i] = ' ';
    	}
  	}
  
  	printf("Sua string e: %s",nome);
	
	return 0;
}
