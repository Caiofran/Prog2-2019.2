/*2. Faça um programa que faça 5 perguntas para uma pessoa sobre um crime. 
As perguntas são:
     "Telefonou para a vítima?" 

    "Esteve no local do crime?"

     "Mora perto da vítima?" 

    "Devia para a vítima?"

     "Já trabalhou com a vítima?"

    A pessoa vai responder com 's' ou 'n'
O programa deve no final emitir uma classificação 
sobre a participação da pessoa no crime. Se a pessoa 
responder positivamente a 2 questões ela deve ser classificada 
como "Suspeita", entre 3 e 4 como "Cúmplice" e 5 como "Assassino". 
Caso contrário, ele será classificado como "Inocente". */
#include<stdio.h>

int main()
{
	int contador;
    char resp, resp2, resp3, resp4, resp5;

    printf("Telefonou para a vitima?");
    scanf(" %c", &resp);

    printf("Esteve no local do crime?");
    scanf(" %c", &resp);

    printf("Mora perto da vítima?");
    scanf(" %c", &resp);

    printf("Devia para a vitima?");
    scanf(" %c", &resp);

    printf("Já trabalhou com a vítima?");
    scanf(" %c", &resp);

    if(resp =='s'){
      contador++;
    }
    if(resp2 == 's'){
      contador++;
    }
    if(resp3 == 's'){
      contador++;
    }

    printf("%d", contador);
    
    return 0;
}
    
