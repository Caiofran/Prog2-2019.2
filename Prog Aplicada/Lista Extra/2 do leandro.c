/*2. Fa�a um programa que fa�a 5 perguntas para uma pessoa sobre um crime. 
As perguntas s�o:
     "Telefonou para a v�tima?" 

    "Esteve no local do crime?"

     "Mora perto da v�tima?" 

    "Devia para a v�tima?"

     "J� trabalhou com a v�tima?"

    A pessoa vai responder com 's' ou 'n'
O programa deve no final emitir uma classifica��o 
sobre a participa��o da pessoa no crime. Se a pessoa 
responder positivamente a 2 quest�es ela deve ser classificada 
como "Suspeita", entre 3 e 4 como "C�mplice" e 5 como "Assassino". 
Caso contr�rio, ele ser� classificado como "Inocente". */
#include<stdio.h>

int main()
{
	int contador;
    char resp, resp2, resp3, resp4, resp5;

    printf("Telefonou para a vitima?");
    scanf(" %c", &resp);

    printf("Esteve no local do crime?");
    scanf(" %c", &resp);

    printf("Mora perto da v�tima?");
    scanf(" %c", &resp);

    printf("Devia para a vitima?");
    scanf(" %c", &resp);

    printf("J� trabalhou com a v�tima?");
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
    
