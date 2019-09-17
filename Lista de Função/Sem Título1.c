#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
 
   int numero_inicial,numero_final;
   int i; // indexador do intervalo a ser testado
   int contador = 2; // vari�vel de contagem do la�o
   int controle; // Vari�vel de controle
   
   float maximo; // cota superior para o loop de teste
   
   printf("Determinando os numeros primos num intervalo fixado \n");
   
   printf("Entre com o numero inicial maior ou igual a 2 ");
   scanf("%i",&numero_inicial);
   
   printf("Entre com o numero final ");
   scanf("%i",&numero_final);
   
   
   for(i = numero_inicial; i <= numero_final;i++)
   {
      controle = 0;
      maximo = sqrt((double) i);
     
      if (i == 2)
         controle = 1;
      else
      {
         while((i % contador) != 0 && (contador < (int) maximo))
         contador++;
     
         // Caso em que o loop termina apenas com a vari�vel contador == i
         if (contador == i)
           --contador;
     
         controle = (i % contador)?1:0;
      }
       
      if (controle == 1)
         printf("%i  ",i);      
      //else
        // printf("O numero %i nao e primo\n",i);
     
      contador = 2;
     
   }
   
   return(0);
}
