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

  // versão 1, jogando em uma estrutura

  printf("Antes das modificacoes: \n");
  printFiles();
  printf("\n******PROGRAMA*****\n");

  FILE *fpC = fopen("contas.bin","rb");  // ou apenas fopen("contas.bin","rb+");
  FILE *fpM = fopen("movement.bin", "rb");
  if(fpC == NULL || fpM == NULL){
    printf("I/O error");
    exit(1);
  }

  // INICIO DA PARTE IMPORTANTE DA RESPOSTA

  struct movement tm;
  struct contas tc;
  // passo 1, descobrir o tamanho do arquivo.
  //Podemos fazer com loop
  int tamM=0,tamC=0;
  while(fread(&tm, 1, sizeof(struct movement), fpM) != 0)
    tamM++;
  while(fread(&tc, 1, sizeof(struct contas), fpC) != 0)
    tamC++;
  fseek(fpM,0,SEEK_SET); // também pode: rewind(fpM);
  fseek(fpC,0,SEEK_SET); // também pode: rewind(fpC);

  // passo 2, criar estruturas com o tamanho adequado
  struct movement *m = malloc(sizeof(struct movement) * tamM);
  struct contas *c = malloc(sizeof(struct contas) * tamC);
  fread(m, tamM, sizeof(struct movement), fpM);
  fread(c, tamC, sizeof(struct contas), fpC);

  // passo 3, modificar a estrutura
  for(int i=0;i<tamC;i++){
    for(int j=0;j<tamM;j++)
    if(c[i].nClient == m[j].nClient){
      if(m[i].tipo == 'C')
        c[i].saldo += m[j].valor;
      if(m[i].tipo == 'S')
        c[i].saldo = m[j].valor;
    }
  }

  // passso 4, sobreescrever o arquivo
  fclose(fpC);
  fpC = fopen("contas.bin","wb");
  fwrite(c, sizeof(struct contas),tamC, fpC);

  fclose(fpC);
  fclose(fpM);

  // FIM DA PARTE IMPORTANTE DA RESPOSTA


  printf("\n******FIM*****\n");
  printf("Depois das modificacoes: \n");
  printFiles();

  return 0;
}


// versão alternativa para identificar tamanho do arquivo usando ftell
  /*
  fseek(fpM, 0L, SEEK_END); 
  fseek(fpC, 0L, SEEK_END); 
  tamM = ftell(fpM) / sizeof(struct movement);
  tamC = ftell(fpC) / sizeof(struct contas); 
  rewind(fpC);
  rewind(fpM);
  */



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