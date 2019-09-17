#include <stdio.h>
//nao esta certo tem que fazer algumas coisas
//nao sei si ta certo 
int main() 
{
  int vet[5] = {0,70,12,100,19}, i, j, temp;

  for(i=0,j=4;i<3; i++, j--)
  { // no lugar do (4/2) poderia ser i<3 tbm. 

    temp = vet[i];
    vet[i] = vet[j];
    vet[j] = temp;

    printf(" %d", vet[i]);
  }

  return 0;
}
