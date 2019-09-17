/*2- Faça um programa que lê segundos e converte para horas, minutos e segundos*/
#include<stdio.h>

int segHoras(int tempo);

int main()
{
	int tempo;
	int horas,horasseg,minutos,segundos;

	printf("Entre com o numero de segundos: ");
	scanf("%d",&tempo);
	
	horasseg=3600;
	
	horas = (tempo/horasseg); 

	minutos = (tempo -(horasseg*horas))/60;

	segundos = (tempo -(horasseg*horas)-(minutos*60)); 
	
	printf("%dh : %dm : %ds \n",horas,minutos,segundos);
	
	return 0;
}
