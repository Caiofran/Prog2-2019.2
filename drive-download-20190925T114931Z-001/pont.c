#include <stdio.h>
int main()
{
	int a=1,b=2,c=3;
	
	int *p = &b;
	//ERRADO *p=&b;
	p = &b;
	
	
	printf("endereço de a=%d, b=%d, e c%d", &a, &b, &c);
	
	printf("\nvalor de p = %d = %d", p, *p);
	p=p+1;
	printf("\nvalor de p = %d = %d", p, *p);
	
	//como imprimir o valor da variavel c, sem usar a variavel
	p=p-2;
	printf("\nvalor de p = %d = %d", p, *p);
	
}

