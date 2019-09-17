#include <stdio.h>

/*

3. Faça um programa que verifica se alguém ganhou um jogo da velha.  O programa vai ler uma matriz 3x3, onde cada posição representa uma das casas do tabuleiro.  A matriz pode conter os valores  -1, 0, 1  que representam:
    - uma casa contendo uma peça do meu oponente (   **1**   )
    - uma casa vazia do tabuleiro (  **0**  )
    - uma peça minha (  **-1**   )

 
*/

#define TAM 3

int main() {
  int ganhou = 0;
  int contA=0,contB=0;

  // leitura da matriz
  int i,j,jogo[TAM][TAM];
    for(i=0;i<TAM;i++){
      for(j=0;j<TAM;j++){
        printf("Digite [%d][%d]: ",i,j);
        scanf("%d",&jogo[i][j]);
      }
    }

  // impressão da matriz
  printf("Seu tabuleiro:\n");
  for(i=0;i<TAM;i++){
      for(j=0;j<TAM;j++){
        printf("[%d] \t",jogo[i][j]);
      }
    printf("\n");
  }

  // verificar se alguém ganhou na diag principal
  contA=0,contB=0;
  for(i=0;i<TAM;i++){
    if(jogo[i][i] == 1)
      contA++;
    else if(jogo[i][i] == -1)
      contB++;
  }
  // verificar vencedor
  if(contA==3) ganhou = 1;
  else if(contB==3) ganhou = -1;
  else{
    // verificar se alguém ganhou na diag secundaria
    contA=0,contB=0;
    for(i=0;i<TAM;i++){
      for(j=0;j<TAM;j++){
        if(i+j == TAM-1){
          if(jogo[i][j] == 1)
            contA++;
          else if(jogo[i][j] == -1)
            contB++;
        }
      }
    }
    // verificar vencedor
    if(contA==3) ganhou = 1;
    else if(contB==3) ganhou = -1;
    else{
      // verificar se alguém ganhou na horizontal
      contA=0,contB=0;
      for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
          if(jogo[i][j] == 1)
            contA++;
          else if(jogo[i][j] == -1)
            contB++;
        }
        // se alguém ganhou já sai logo. 
        //Senão, vamos contar novamente
        if(contA == 3 || contB == 3)
          break;
        else
          contA=0,contB=0;
      }

      // verificar vencedor
      if(contA==3) ganhou = 1;
      else if(contB==3) ganhou = -1;
      else{

        // verificar se alguém ganhou na vertical
        contA=0,contB=0;
        for(i=0;i<TAM;i++)
		{
          for(j=0;j<TAM;j++)
		  {
            if(jogo[j][i] == 1)
              contA++;
            else if(jogo[j][i] == -1)
              contB++;
          }
          // se alguém ganhou já sai logo. 
          //Senão, vamos contar novamente
          if(contA == 3 || contB == 3)
            break;
          else
            contA=0,contB=0;
        }
        // verificar vencedor
        if(contA==3) ganhou = 1;
        else if(contB==3) ganhou = -1;

      }
    }
  }

  if (ganhou == 1)
  {
  	printf("Jogador A ganhou\n");
  }
  else if (ganhou == -1)
  {
  	printf("Jogador B ganhou\n");
  }
  else
  {
  	 printf("Ninguém ganhou\n");
  }
  
  return 0;
}
