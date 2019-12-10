#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

#define qtdClients 3
#define qtdMovs 5

struct contas{
  int nClient;
  char nome[40];
  float saldo;
};

struct movement{
  int nClient;
  char tipo;
  float valor;
};


void printFiles();
void preencherValores();
char *geraNome();

int main(void) {
  
  preencherValores();

  // versão 1, lendo direto do arquivo.

  printf("Antes das modificacoes: \n");
  printFiles();
  printf("\n******PROGRAMA*****\n");



  FILE *fpC = fopen("contas.bin","rb+");  // ou apenas fopen("contas.bin","rb+");
  FILE *fpM = fopen("movement.bin", "rb");
  if(fpC == NULL || fpM == NULL){
    printf("I/O error");
    exit(1);
  }
  struct movement m;
  struct contas c;

  // INICIO DA PARTE IMPORTANTE DA RESPOSTA

  // para cada movimentação
  while(fread(&m, 1, sizeof(struct movement), fpM) != 0){
  // percorrer as contas
    while(fread(&c,1,sizeof(struct contas),fpC) != 0){
      // se for igual, altere os dados
      if(m.nClient == c.nClient){
        if(m.tipo == 'S') c.saldo -= m.valor;
        if(m.tipo == 'C') c.saldo += m.valor;
        // dar um passo para trás no arquivo
        fseek(fpC, -sizeof(struct contas), SEEK_CUR);
        // reescrever a posicao atual no arquivo
        fwrite(&c, 1, sizeof(struct contas),fpC);
        // volta com o ponteiro de arquivo para o inicio
        fseek(fpC,0,SEEK_SET);
        break;
      }
    }
    
  // FIM DA PARTE IMPORTANTE DA RESPOSTA

  }

  fclose(fpC);
  fclose(fpM);

  printf("\n******FIM*****\n");
  printf("Depois das modificacoes: \n");
  printFiles();


  return 0;
}



char *geraNome(){
  char *pn[] = {"joelson","marcos","Jonathan","Carlos","Maciel","bob","Sander","Jonny","Creisson","Raphael","Kim","jong"};
  char *un[] = {"Silva","Santos","Rosa","Lopes","Silveira","Do carmo","Jong","Korms","Sutter"};
  int s1= sizeof(pn)/sizeof(pn[0]);
  int s2= sizeof(un)/sizeof(un[0]);
  char *nome =malloc(1000);
  strcat(nome,pn[rand()%(s1)]);
  strcat(nome," ");
  strcat(nome,un[rand()%(s2)]);
  return nome;
}

void preencherValores()
{
  srand(time(NULL));
  FILE *fpContas = fopen("contas.bin", "wb");
  FILE *fpMov = fopen("movement.bin","wb");
  if(fpContas == NULL || fpMov == NULL){
    printf("I/O error");
    exit(1);
  }

  struct contas clients[10];
  struct movement mov[30];

  for(int i=0;i<qtdClients;i++){
    clients[i].nClient = i;
    strcpy(clients[i].nome,geraNome());
    clients[i].saldo = rand() % 1000;
    fwrite(&clients[i],sizeof(struct contas),1,fpContas);
  }
 
 for(int i=0;i<qtdMovs;i++){
    mov[i].nClient = rand() % qtdClients;
    mov[i].tipo = (rand() % 2 == 0) ? 'C' : 'S' ;
    mov[i].valor = rand() % 200;
    fwrite(&mov[i],sizeof(struct movement),1,fpMov);
  }

  fclose(fpContas);
  fclose(fpMov);

}

void printFiles(){

  FILE *fp = fopen("contas.bin","rb");
  struct contas c;
  printf("\nContas:\n");
  while(fread(&c, sizeof(struct contas), 1, fp) !=0){
    printf("id: %d\n",c.nClient);
    printf("nome: %s\n",c.nome);
    printf("saldo: %.2f\n",c.saldo);
  }
  fclose(fp);
  printf("\nMovimentações:\n");
  fp = fopen("movement.bin","rb");
  struct movement m;
  while(fread(&m, sizeof(struct movement), 1, fp) !=0){
    printf("id: %d\n",m.nClient);
    printf("tipo: %c\n",m.tipo);
    printf("valor: %.2f\n",m.valor);
  }
  fclose(fp);

}