/*Fa�a um algoritmo que leia o n�mero de andares de um pr�dio e, a seguir, 
para cada andar do pr�dio, leia o n�mero de pessoas que entraram e sa�ram do 
elevador. Considere que o elevador est� vazio e est� subindo, os dados se referem 
a apenas uma �subida� do elevador e que o n�mero de pessoas dentro do elevador sempre
ser� maior ou igual a 0. Se o n�mero de pessoas, ap�s a entrada e sa�da for maior 
que 15, deve ser mostrada a mensagem �EXCESSO DE PASSAGEIROS . DEVEM SAIR" em 
seguida, o n�mero de pessoas que devem sair do elevador, de modo que seja 
obedecido o limite de 15 passageiros. Ap�s a entrada de pessoas no �ltimo andar 
o algoritmo deve mostrar quantas pessoas ir�o descer.
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
  printf("\nv�o descer %d pessoas",subida);
  
  return 0;
}
