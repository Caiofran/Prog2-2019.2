/*3-Faça uma função que receba três notas de um aluno com parâmetros e uma 
letra. Se a letra for A o procedimento calcula a média das notas do
aluno, se for P o procedimento calcula a média ponderada com pesos 5,3 e
2. A média calculada deve ser devolvida ao programa principal para,
então ser mostrada.*/
#include <stdio.h>

float alunoNota(float n1 , float n2, float n3,char letra);

int main() 
{
  float nota1,nota2,nota3,x;
  char letra;

  printf("Informe a 1 nota: ");
  scanf("%f",&nota1);

  printf("Informe a 2 nota: ");
  scanf("%f",&nota2);

  printf("Informe a 3 nota: ");
  scanf("%f",&nota3);

  printf("Informe um procedimento A e P: ");
  scanf(" %c",&letra);

  x=alunoNota(nota1,nota2,nota3,letra);

  printf("A media do aluno e: %.2f",x);

  return 0;
}

float alunoNota(float n1 , float n2, float n3,char letra)
{
    float media=0,soma=0;

    if(letra == 'a' || letra == 'A')
    {
      soma=n1+n2+n3;
      media=soma/3;
    }
    else
    {
      soma=(n1*5)+(n2*3)+(n3*2);
      media=soma/(5+3+2);
    }

    return media;
}
