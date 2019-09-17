/*Desenvolver um programa para verificar a nota do aluno em uma prova com 10 questões,
o programa deve perguntar ao aluno a resposta de cada questão e ao final comparar com 
o gabarito da prova e assim calcular o total de acertos e a nota (atribuir 1 ponto por
resposta certa). Após cada aluno utilizar o sistema deve ser feita uma pergunta se 
outro aluno vai utilizar o sistema. Após todos os alunos terem respondido informar:
- Maior e Menor Acerto;
- Total de Alunos que utilizaram o sistema;
- A Média das Notas da Turma.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
  int i,cont=0,j=0,resul[1],maior=-1,menor=11,alu=0;
  float med;
  char res[10],resa[10],re;

  //receber resposta do prof
  for(i=0;i<10;i++)
  {
    printf("\nProfessor,entre com as repostas corretas:");
    fflush(stdin);
    scanf(" %c",&res[i]);
  }
  //receber resposta dos aluno
  do
  {
    for(i=0;i<10;i++)
	{
      printf("\nAluno,entre com as suas repostas:");
      fflush(stdin);
      scanf(" %c",&resa[i]);

  //calcular os acertos do aluno
      if(res[i]==resa[i])
	  {
        resul[alu]=resul[alu]+1;
      }
    }
  //media total da turma  
  med=med+resul[alu];

  // saber se deve manter o loop infinito ou n   
    printf("gostaria de continuar?(s/n):");
    scanf(" %c",&re);
    
  //aumentando o tamanho do vetor caso seja necessário 
    alu++;
  

  }while(re=='s');  

  //pegando o maior e menor resultados
  for(i=0;i<alu;i++)
  {
    if(resul[i]>maior)
	{
      maior=resul[i];
    }
    if(resul[i]<menor)
	{
      menor=resul[i];
    }
  }
  med=med/(alu);
  printf("O maior acerto foi %d,o menor acerto foi %d.\n\nO total de alunos que utilizou o sistema foi %d\n\nA media da turma foi  %.2f",maior,menor,alu,med);
  
  return 0;
}
