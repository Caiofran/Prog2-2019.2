/*4-Escreva uma função que determina se três valores inteiros fornecidos
como parâmetros representam medidas de um triângulo retângulo. Suponha
que os parâmetros são fornecidos em ordem decrescente.*/
//(a² = b² + c²)
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
