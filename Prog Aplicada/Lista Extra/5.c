/*Faça um algoritmo que leia o número de andares de um prédio e, a seguir, 
para cada andar do prédio, leia o número de pessoas que entraram e saíram do 
elevador. Considere que o elevador está vazio e está subindo, os dados se referem 
a apenas uma “subida” do elevador e que o número de pessoas dentro do elevador sempre
será maior ou igual a 0. Se o número de pessoas, após a entrada e saída for maior 
que 15, deve ser mostrada a mensagem “EXCESSO DE PASSAGEIROS . DEVEM SAIR" em 
seguida, o número de pessoas que devem sair do elevador, de modo que seja 
obedecido o limite de 15 passageiros. Após a entrada de pessoas no último andar 
o algoritmo deve mostrar quantas pessoas irão descer.
*/
#include <stdio.h>

int main() 
{
  int andar,pessoas,pessoas1,subida,saida,i;
  
  printf("o predio tem quantos andares?");
  scanf("%d",&andar);

  for(i=0;i<=andar;i++)
  {
    printf("\nentrou quantas pessoas entraram neste andar?(%d)",i);
    scanf("%d",&pessoas);
  
    subida=subida+pessoas;

    printf("\nsaiu quantas pessoas do elevador?");
    scanf("%d",&pessoas1);
  
    subida=subida-pessoas1;

    if(subida>15)
	{
      printf("\nEXCESSO DE PASSAGEIROS");
      saida=subida-15;
      printf("\nDEVEM SAIR:%d pessoas",saida);
      subida=subida-saida;
    }

    else if(subida<0)
	{
      printf("\n tem algo de errado ai,ta maluco?");
      break;
    }
  }
  printf("\nvão descer %d pessoas",subida);
  
  return 0;
}
