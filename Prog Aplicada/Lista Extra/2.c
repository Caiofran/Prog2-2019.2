#include <stdio.h>
#include <stdlib.h>
/*2. Faça um programa que faça 5 perguntas para uma pessoa sobre um crime. As perguntas são:

     "Telefonou para a vítima?" 

    "Esteve no local do crime?"

     "Mora perto da vítima?" 

    "Devia para a vítima?"

     "Já trabalhou com a vítima?"

    A pessoa vai responder com 's' ou 'n'

    O programa deve no final emitir uma classificação sobre a participação da pessoa no crime. Se a pessoa responder positivamente a 2 questões ela deve ser classificada como "Suspeita", entre 3 e 4 como "Cúmplice" e 5 como "Assassino". Caso contrário, ele será classificado como "Inocente".*/
int main(void) 
{
  int cont=0;
  char res,res1,res2,res3,res4;

  printf("Voce telefonou para a vitima?");
  scanf("%c",&res);
  
  if(res=='s')
  {
    cont++;
  }
  fflush(stdin);
  
  printf("Voce esteve no local do crime?");
  scanf("%c",&res1);
  if(res1=='s')
  {
    cont++;
  }
  fflush(stdin);

  printf("Mora perto da Vitima?");
  scanf("%c",&res2);
  
  if(res2=='s')
  {
    cont++;
  }
  fflush(stdin);

  printf("Voce devia para vitima?");
  scanf("%c",&res3);
  if(res3=='s')
  {
    cont++;
  }
  fflush(stdin);

  printf("Ja trabalhou com a vitima?");
  scanf("%c",&res4);
  
  if(res4=='s')
  {
    cont++;
  }
  fflush(stdin);

  if(cont==2)
  {
    printf("voce é suspeita(o)...");
  }
  else if(cont==3 || cont==4)
  {
    printf("voce e Cumplice!");
  }
  else if(cont==5)
  {
    printf("VOCE EH O ASSASSINO(A)!!!!!");
  } 
  else 
  printf("tu ta limpo.");
  
  return 0;
}
