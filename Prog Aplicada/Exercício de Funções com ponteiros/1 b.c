/*1- B Faça um programa que lê uma string e utiliza essa função para transformar todos os caracteres minúsculos em maiúsculos*/
#include <stdio.h>
#include<string.h>

void trocaChar(char *frase);

int main() 
{
  int n;
  char str[50];

  printf("digite sua frase: ");
  gets(str); 
  
  trocaChar(str);

  printf("%s",str);

  return 0;
}
//https://web.fe.up.pt/~ee96100/projecto/Tabela%20ascii.htm

// tem que usar essa tabela ascii
void trocaChar(char *frase)
{
  while(*frase != '\0'){
   if(*frase != 32)
     *frase-=32;
     frase++;
  } 
}
