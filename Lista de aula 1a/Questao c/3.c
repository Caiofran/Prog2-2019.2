#include<stdio.h>
#include<string.h>

int main()
{
	float av1,av2,av3,media=0,menor=0,mediam=0;
	float n_faltas,n_aulas,media_faltas;
	
	printf("Informe a nota da AV1: ");
	scanf("%f",&av1);
	
	printf("\nInforme a nota da AV2: ");
	scanf("%f",&av2);
	
	printf("\nInforme a nota da AV3: ");
	scanf("%f",&av3);
	
	printf("\nInforme o total de faltas: ");
	scanf("%f",&n_faltas);
	
	printf("\nInforme o numero de aulas: ");
	scanf("%f",&n_aulas);
	
	media=(av1+av2)/2;
	
	printf("\nA media do aluno: %.2f\n",media);
	
	//faltas div aulas
	//para descobrir a porcentagem de faltas
	media_faltas=n_faltas/n_aulas;
	
	printf("\nMedia de faltas: %.2f\n",media_faltas);// at� aqui est� certo
	printf("\n");

/*Escreva um programa que determine e a m�dia e a situa��o de um aluno em uma disciplina. 
Seu programa deve ler  tr�s notas de um aluno ( av1 , av2 e av3 ), seu n�mero de faltas ( n_faltas), o n�mero total de aulas da 
disciplina ( n_aulas ). Seu programa deve mostrar a m�dia do aluno, a quantidade de faltas e informar se ele est� APROVADO ou 
REPROVADO. Considerando que:
- Alunos com mais de 25% de faltas est� REPROVADO
- Alunos com menos de 25% de faltas e com m�dia abaixo de 6.0 est� REPROVADO
- Alunos com menos de 25% de faltas e com m�dia acima de 6.0 est�o APROVADO
- Caso o aluno n�o obtenha m�dia 6.0 com av1 e av2, o valor da av3 deve substituir o valor da menor nota.
- Caso o aluno n�o tenha feito av3, deve ser inserido 0
*/		
	/*if(media_faltas<0.25)
	{
		printf("Aprovado");
	}
	else */
	if(media_faltas<0.25 && media>=6.0)//- Alunos com menos de 25% de faltas e com m�dia acima de 6.0 est�o APROVADO
	{
		printf("Aprovado");
	}
	else if(media_faltas>=0.25)//Alunos com mais de 25% de faltas est� REPROVADO
	{
		printf("Reprovado");
	}
	else if(media_faltas<0.25 && media<6.0)//- Alunos com menos de 25% de faltas e com m�dia abaixo de 6.0 est� REPROVADO
	{
		printf("Reprovado");
		/*if(av1<av2)
		{
			menor=av1;
		}
		else
		{
			menor=av2;
		}
		mediam=menor+av3/2;
		if(mediam>=6.0)
		{
			printf("Aprovado");
		}*/
	}
	
	return 0;
}
