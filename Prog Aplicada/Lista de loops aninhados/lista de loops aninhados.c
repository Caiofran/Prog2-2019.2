#include <stdio.h>

void apresentar(int n);

void inverter(int n);

void multi(int n);

int main(void) {
  //numero 1
  int n;

  printf("entre com valor n:");
  scanf("%d",&n);

  apresentar(n);
  
  //numero 2
  inverter(n);
  
  //numero 3
  multi(n);

  

  return 0;
}
//num 1
void apresentar(int n)
{
 int i,j;
    
    for(i=1;i<=n;i++)
	{
      for(j=1;j<=i;j++)
	  {
        printf("%d",i);
      }
      printf("\n");
    }
}

//num 2
void inverter(int n)
{
  int i,j;
     printf("\n\n");

    for(i=n;i>0;i--)
	{
      for(j=0;j<i;j++)
	  {
        printf("%d",i);
      }
      printf("\n");
    }
}

//num 3
void multi(int n)
{
  int i,j,resul=0;
  char r;

  do
  {
	  printf("\nInsira um número e eu computarei uma tabela de multiplicação para você:");
	  scanf("%d",&n);
	
	  printf("\nVocê digitou %d. Aqui está a tabela de multiplicação\n",n);
	
	 
	
	  for(i=1;i<=n;i++)
	  {  
	    for(j=1;j<=n;j++)
		{
	      resul=resul+i;
	      printf("%d \t",resul);
	      
	    }printf("\n");
	    resul=0;    
	  }
	
	  printf("está feliz?(s/n)");
	  scanf(" %c",&r);

  }while(r!='s');
}
