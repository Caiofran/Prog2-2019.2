/*Uma grande emissora de televisão quer fazer uma enquete entre os seus 
telespectadores para saber qual o melhor jogador após cada jogo. Para isto, 
faz-se necessário o desenvolvimento de um programa, que será utilizado pelas 
telefonistas, para a computação dos votos. Sua equipe foi contratada para 
desenvolver este programa, utilizando a linguagem de programação C. Para 
computar cada voto, a telefonista digitará um número, entre 1 e 23, correspondente 
ao número da camisa do jogador. Um número de jogador igual zero, indica que a 
votação foi encerrada. Se um número inválido for digitado, o programa deve 
ignorá-lo, mostrando uma breve mensagem de aviso, e voltando a pedir outro 
número. Após o final da votação, o programa deverá exibir: 
- O total de votos computados;
- Os númeos e respectivos votos de todos os jogadores que receberam votos;
- O percentual de votos de cada um destes jogadores;
- O número do jogador escolhido como o melhor jogador da partida, juntamente 
com o número de votos e o percentual de votos dados a ele.

Observe que os votos inválidos e o zero final não devem ser computados como votos.

O resultado aparece ordenado pelo número do jogador.

- Exemplo
Enquete: Quem foi o melhor jogador?
    
    Número do jogador (0=fim): 9
    Número do jogador (0=fim): 10
    Número do jogador (0=fim): 9
    Número do jogador (0=fim): 10
    Número do jogador (0=fim): 11
    Número do jogador (0=fim): 10
    Número do jogador (0=fim): 50
    Informe um valor entre 1 e 23 ou 0 para sair!
    Número do jogador (0=fim): 9
    Número do jogador (0=fim): 9
    Número do jogador (0=fim): 0
    
    Resultado da votação:
    
    Foram computados 8 votos.
    
    Jogador Votos           %
    9               4               50,0%
    10              3               37,5%
    11              1               12,5%
    O melhor jogador foi o número 9, com 4 votos, correspondendo a 50% do total de votos.*/
#include <stdio.h>

int main()
{
  int votos=0,vet[4],soma=0,cont,i=0,j=0,maior=-1;
  float porc[4],porc2[4];

  for(i=0;i<4;i++)
  {
    vet[i]=0;
  }

  printf("*****Enquete: Quem foi o melhor jogador?(1 até 23)******\n\n");
  //pegando os votos
  do{
    printf("Numero do jogador (0=Para Sair):");
    scanf("%d",&votos);

   //somando os  votos por jogador
    /*for(i=0;i<4;i++){
		  if(vet[i]==0){
        for(j=i;j<4;j++){
            nome[j]=nome[j+1];
        }
      }
    }*/      
    for(i=1;i<4;i++)
	{
      if(votos==i)
	  {
       vet[i]=vet[i]+1;
      }
    }
    //
    /*vet[votos]-Caso precise alcançar direto o indice pode se aplicar direto a variável no indice
    
    vet[votos]+=1;

    
    */

  }while(votos!=0);
  //fazendo a soma  total de todos os votos de todos os jogadores 
  for(i=1;i<4;i++)
  {
    soma=soma+vet[i];   
  }


  //calculando porcentagem de cada jogador
  for(i=1;i<4;i++)
  {
   	porc2[i]=(vet[i]*100)/soma;
  }  
  printf("\n\nResultado da votação:\n\n\n Foram Computados %d Votos.\n\n Jogador Vots \t\t\t x \n\n",soma);
  
  for(i=1;i<4;i++)
  {
    if(vet[i]!=0)
	{
      printf("%d\t\t\t %d\t\t\t %.1f\n",i,vet[i],porc2[i]);
    }
    if(maior<vet[i])
	{
      maior=vet[i];
    }
  }
      
    /*Foram computados 8 votos.
    
    Jogador Votos           %
    9               4               50,0%
    10              3               37,5%
    11              1               12,5%
    O melhor jogador foi o número 9, com 4 votos, correspondendo a 50% do total de votos.");*/

  return 0;
}
