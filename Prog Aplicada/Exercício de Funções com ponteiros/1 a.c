/*1- A Fa�a uma fun��o chamada trocaChar que recebe por par�metro um n�mero inteiro N e um ponteiro para um caractere C. A fun��o deve alterar o valor de C para o N pr�ximo caractere ap�s C.
Ex:
Para C='a' e N=5, a funcao deve alterarar C para 'f' 
*/
#include <stdio.h>

void trocaChar(int n,char *c);

int main() 
{
  int num;
  char c;
  char *p;

  p=&c;

  printf("Digite um valor:");
  scanf("%d",&num);

  printf("Informe uma letra:");
  scanf(" %c",&c);

  trocaChar(num,p);

  printf("\nSua nova letra �:%c",c);
  
  return 0;
}
void trocaChar(int n, char *c)
{
  *c+=n;
}
