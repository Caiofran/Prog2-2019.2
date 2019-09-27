#include<stdio.h>
#define TAM 5

void trocaMaior(int *vet,int n);

int main()
{
    int i;
    int vet[TAM] = {3,98,153,4,9};
    
    for(i=TAM-1;i>=0;i--)
    {
      trocaMaior(vet,TAM);
    } 
  
    for(i=0;i<TAM;i++)
    {
      printf("%d ",vet[i]);
    }

    return 0;
}
void trocaMaior(int *vet,int n)
{
    int i, maior = 0, posMaior;

    // verificar qual o maior e sua posição
    for(i=0;i<=n;i++)
    {
        if(vet[i] > maior)
        {
            maior = vet[i];
            posMaior = i;
        }
      
      // trocar valores
      int temp = vet[posMaior];
      vet[posMaior] = vet[i];
      vet[i] = temp;
    }
}
