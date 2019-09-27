#include <stdio.h>

int main()
{
	printf("\nNumero de bytes do tipo int = %d bytes", sizeof(int));
	printf("\nNumero de bytes do tipo float = %d bytes", sizeof(float));
	printf("\nNumero de bytes do tipo char = %d bytes", sizeof(char));
	
	int a=10;
	int b=90;
	char letra;
	int *p; //ponteiro para int
	
	//imprime o endereço de a
	printf("\nendereco da variavel a = %p", &a);
	
	//imprime o endereço de b
	printf("\nendereco da variavel b = %p", &b);
	
	//imprime o endereço de letra
	printf("\nendereco da variavel letra = %p", &letra);
	
	//exibir conteudo apontado por p
	p = &a;
	printf("\n\nvalor de p = %p", p);
	printf("\n\nconteudo apontado por p = %d", *p);
	
	printf("\n\nvalor de a = %d", a);
	*p = 11;
	printf("\n\nvalor de a = %d", a);

	a++;
	printf("\n\nvalor de p = %d", p);
	printf("\n\nconteudo apontado por p = %d", *p);
	
	//usando ponteiro, acrescente o valor de a em b
	p=p-1;
	*p=*p+a;
	
	printf("\nvalor de b = %d", b);
	
	
	return 0;
}
