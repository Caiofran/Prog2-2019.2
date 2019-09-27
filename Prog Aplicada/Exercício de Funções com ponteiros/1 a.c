/*1- A Faça uma função chamada trocaChar que recebe por parâmetro um número inteiro N e um ponteiro para um caractere C. A função deve alterar o valor de C para o N próximo caractere após C.
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

  printf("\nSua nova letra é:%c",c);
  
  return 0;
}
void trocaChar(int n, char *c)
{
  *c+=n;
}
