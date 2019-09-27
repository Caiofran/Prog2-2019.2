#include <stdio.h>

void troca(int *a, int *b)
{
	int aux;
	
	aux = *a;
	*a = *b;
	*b = aux;
}

int main()
{
	int num1=10;
	int num2=90;
	
	printf("\nnum1=%d : num2=%d", num1, num2);
	troca(&num1, &num2);
	printf("\nnum1=%d : num2=%d", num1, num2);
	
	
}
