/*1. Crie um programa que calcule o consumo de combustível de uma viagem.  O programa deve receber
  o percurso rodado em km e o tipo de carro (A, B e C) 
e calcular o consumo estimado, conforme o tipo de veículo, sendo (A=8, B=9 e C=12) km/litro.*/
#include<stdio.h>

int main()
{
	float percurso;
	char tipo_de_carro;
	float res;
	
	printf("Digite qtd de km do percurso: ");
	scanf("%f",&percurso);
	
	printf("Qual o tipo de carro: ");
	scanf(" %c",&tipo_de_carro);
 	
 	if(tipo_de_carro == 'a')
 	{
 		res=percurso / 8;
	}
	else if(tipo_de_carro == 'b') 
	{
		res=percurso / 9;
	}
	else if(tipo_de_carro == 'c')
	{
		res=percurso / 12;
	}
 	
 	printf("O consumo foi: %.2f",res);
 	
	return 0;
}
