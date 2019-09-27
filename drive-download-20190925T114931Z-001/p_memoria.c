#include <stdio.h>

int main()
{
	int a, b;
	int *p; // cria um ponteiro para int
	
	printf("\nEntre com o valor de a:");
	scanf("%d", &a);
	
	printf("\nEntre com o valor de b:");
	scanf("%d", &b);
	
	//1.1 O programa deverá exibir o endereço de memória alocado para as duas variáveis anteriores
	printf("\nO endereco da variavel a = %d", &a);
	printf("\nO endereco da variavel b = %d", &b);
	
	//1.2 Usando ponteiro, acrescente 10 ao valor de a, exiba novamente o valor após alterado

	printf("\nValor de a (antes) = %d", a);
	p = &a;
	*p = *p + 10;
	printf("\nValor de a (depois) = %d", a);
	
	printf("\nO valor de p = %d", p);
	
	
}
