/*4-Escreva uma fun��o que determina se tr�s valores inteiros fornecidos
como par�metros representam medidas de um tri�ngulo ret�ngulo. Suponha
que os par�metros s�o fornecidos em ordem decrescente.*/
//(a� = b� + c�)
#include <stdio.h>

void trianguloRetangulo(int a, int b, int c);

int main() 
{
  int n1,n2,n3;

  printf("Infome um numero: ");
  scanf("%d",&n1);

  printf("Digite um numero: ");
  scanf("%d",&n2);

  printf("Informe um numero: ");
  scanf("%d",&n3);
  
  trianguloRetangulo(n1,n2,n3);

  return 0;
}

void trianguloRetangulo(int a, int b, int c)
{
  int mul=0;
	
	mul=b*b+c*c;
	
	if(a*a==mul)
	{
		printf("E um triangulo retangulo");
	}
	else
	{
		printf("Nao um triangulo retangulo");
	}
}
