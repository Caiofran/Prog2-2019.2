#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

struct alunos{
  char nome[100];
  int idade;
  float mensalidade;
  int desconto;
};

void geraTurma(char *arq1,char *arq2,int tam);
int unirAlunos(char *arq1,char *arq2);

int main(void) {
  //geraTurma("alunos1.bin","alunos2.bin",3);
  unirAlunos("alunos1.bin", "alunos2.bin");
  return 0;
}

int unirAlunos(char *arq1,char *arq2){
  int qtdAlunos;


  FILE *fpTurma1 = fopen(arq1,"rb"); 
  FILE *fpTurma2 = fopen(arq2,"rb"); 
  FILE *fpSaida = fopen("saida.bin","wb");
  struct alunos aluno;
  
  if(fpTurma1 == NULL || fpTurma2 == NULL || fpSaida == NULL){
    printf("Erro de I/O em %s",__func__);
    exit(0);
  }  
  
  // INICIO DA PARTE IMPORTANTE DA RESPOSTA

  while(fread(&aluno,sizeof(struct alunos),1,fpTurma1)!=0){
    if(aluno.desconto>10){
      fwrite(&aluno,sizeof(struct alunos),1,fpSaida);
      qtdAlunos++;
    }
  } 
  
  while(fread(&aluno,sizeof(struct alunos),1,fpTurma2)!=0){
      if(aluno.desconto>10){
        fwrite(&aluno,sizeof(struct alunos),1,fpSaida);
        qtdAlunos++;
      }
    } 
  // FIM DA PARTE IMPORTANTE DA RESPOSTA

  
  if(qtdAlunos == 0){
    int zero=0;
    fwrite(&zero,sizeof(int),1,fpSaida);
  }
  
  fclose(fpTurma1);
  fclose(fpTurma2);
  fclose(fpSaida);

  return qtdAlunos;
}


void geraTurma(char *arq1,char *arq2,int tam){
  FILE *fpTurma1 = fopen(arq1,"wb"); 
  FILE *fpTurma2 = fopen(arq2,"wb");

  if(fpTurma1 == NULL || fpTurma2 == NULL){
    printf("Erro de I/O em %s",__func__);
    exit(0);
  }  

  srand(time(NULL));
	int i;
  struct alunos aluno;
  for(i=0;i<tam*2;i++){
    sprintf(aluno.nome,"Aluno %d",i);
    aluno.idade = rand() %18;
    aluno.mensalidade = 50 + (rand() % 500); 
    aluno.desconto = rand() %100;
    if (i<=tam)
      fwrite(&aluno, sizeof(struct alunos), 1,fpTurma1);
    else
      fwrite(&aluno, sizeof(struct alunos), 1,fpTurma2);
  }


  fclose(fpTurma1);
  fclose(fpTurma2);

}
