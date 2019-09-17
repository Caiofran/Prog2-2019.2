/*2-Faça uma função que transforme e mostre segundos em horas, minutos e
segundos.*/
#include<stdio.h>

void segHoras(int tempo);

int main()
{
	int tempo;
	
	printf("Entre com o numero de segundos: ");
	scanf("%d", &tempo);
	
  segHoras(tempo);
	
	return 0;
}
void segHoras(int tempo)
{
  int horas, horasseg, minutos, segundos;

  horasseg=3600;
	
	horas = (tempo/horasseg); 

	minutos = (tempo -(horasseg*horas))/60;

	segundos = (tempo -(horasseg*horas)-(minutos*60)); 
	
	printf("%dh : %dm : %ds \n",horas,minutos,segundos);
}
