/*2. Uma universidade deseja conceder uma bônus aos seus professores .  
O cálculo deste bônus deve ser de 10% caso o salario do professor seja menor que 1.500 e 5% caso seja maior ou igual a 1.500.  
Para saber um salário do professor, 
o programa deve ler a quantidade de aulas dadas por um professor e o valor de uma hora aula.*/
#include<stdio.h>
//acho que esta certo
int main()
{
	float qtdAula;
	float valorHora,salario,salarioBonus,bonus;
	
	printf("Digite a qtd de aula: ");
	scanf("%f",&qtdAula);
	
	printf("Informe a valor da hora: ");
	scanf("%f",&valorHora);
	
	salario=qtdAula*valorHora;
	
	if(salario<1500)
	{
		salarioBonus=salario*1.10;
		bonus=salarioBonus-salario;
	}
	else if(salario>1500)
	{
		salarioBonus=1.10*salario;
		bonus=salarioBonus-salario;
	}
	
	printf("O salario sem o bonus: %.2f",salario);
	
	printf("\nO valor do bonus e: %.2f",bonus);
	
	printf("\nO salario com o bonus: %.2f",salarioBonus);
	
	return 0;
}
