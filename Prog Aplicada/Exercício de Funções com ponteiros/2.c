/*2 - Você conseguiu hackear o sistema de notas da Lasalle e agora tem acesso ao vetor de notas de todos os alunos. Faça uma função que acessa, por referência, este vetor de notas e troca todas as notas acima de 8 para 10.
Crie um programa principal que passa um vetor de 50 notas para essa função*/
#include <stdio.h>
#define tam 4

void trocaValor(float *vet,int n);

int main() 
{
  int i;
  float vet[tam];

  for(i=0;i<tam;i++)
  {
    printf("Digite um valor: ");
    scanf("%f",&vet[i]);
  }

  trocaValor(vet,tam);

  printf("\nVetor Modificado:\n");
  for(i=0;i<tam;i++)
  {
    printf("%.2f ",vet[i]);
  }

  return 0;
}
void trocaValor(float *vet,int n)
{
  int i;

  for(i=0;i<n;i++)
  {
    if(vet[i]>=8)
    {
      vet[i]=10;
    }
  }
}
