/* Escreva um programa em C que leia uma string e um caractere. Retirar o caractere informado da string. Escrever a string modificada.*/

#include <stdio.h>
#include <string.h>

int main() 
{
  char nome[500];
  char remov;

  printf("Digite uma string\n");
  gets(nome);

  printf("Digite o caractere:");
  scanf("%c",&remov);

  int tam = strlen(nome);

  for(int i=0;i<tam;i++)
  {
    if(nome[i] == remov)
	{
      for(int j=i;j<tam;j++)
	  {
        nome[j] = nome[j+1];
      }
    }
  }

  printf("Sua string é: %s",nome);

  return 0;
}
