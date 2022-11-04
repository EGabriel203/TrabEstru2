//Nome da disciplina: Programação Estruturada
//Código da turma: 931-74929
//Aluno: Emerson Gabriel Guedes Garcia 2022101329

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

struct Pessoa {	
  char nome[50];
  char endereco[50];
  char cpf[12];
  char rg[10];
  char tel[12];
  char email[50];
  float salario;
  char dataNascimento[10];
  };

	struct Pessoa pessoa1;      
    struct Pessoa pessoa2;
    
struct ELista
{
	int elem;
	struct ELista *prox;
};
struct EMonitor
{
	struct ELista*prim;
	struct ELista*fim;
	int qtde;
};

void create();
int menu();
void imprimir();
int pesquisar(int elem);
void excluir(int elem);
struct ELista *pesquisar_ponteiro(int elem, struct ELista **ant);

struct EMonitor monitor;
main()
{
	
	create();
	while(menu());
}

void create()
{
	monitor.prim=NULL;
	monitor.fim=NULL;
	monitor.qtde=0;	
}
int menu()
{
	int opcao;
	system("cls");
	printf("\n Digite:");
	printf("\n   0.Para Sair ");
	printf("\n   1.Para Imprimir ");
	printf("\n   2.Digite o cpf para busca ");
	printf("\n   3.Para excluir um registro");
	printf("\n");
	scanf("%d",&opcao);
	switch(opcao)
	{
		case 0:return 0;
		
		
		case 1:
		{ int elem;
		  imprimir();
		  printf("\nPressione qualquer tecla para continuar");
		    strcpy( pessoa1.nome, "Edson Figueiredo");
  		    strcpy( pessoa1.endereco, "Rua dias da cruz"); 
 			strcpy( pessoa1.cpf, "11234567891");
  			strcpy( pessoa1.rg, "1234567");
 			strcpy( pessoa1.tel, "987654321");
   			strcpy( pessoa1.email, "edson1@gmail.com");
   			pessoa1.salario = 1234567;
   			strcpy( pessoa1.dataNascimento, "20/06/2003");
   
  			printf( "Nome: %s\n", pessoa1.nome);
  		    printf( "Endereco: %s\n", pessoa1.endereco);
 			printf( "CPF: %s\n", pessoa1.cpf);
 			printf( "RG: %s\n", pessoa1.rg);
   			printf( "Telefone: %s\n", pessoa1.tel);
   			printf( "E-mail: %s\n", pessoa1.email);
   			printf( "Data de nascimento: %s\n\n", pessoa1.dataNascimento); 
			   
			strcpy( pessoa2.nome, "Teaga da costa");
   			strcpy( pessoa2.endereco, "Belford roxo");
   			strcpy( pessoa2.cpf, "2374615492");
   			strcpy( pessoa2.rg, "647395");
   			strcpy( pessoa2.tel, "987235261");
   			strcpy( pessoa2.email, "teaga1@gmail.com");
   			pessoa1.salario = 1000;
   			strcpy( pessoa2.dataNascimento, "14/09/2003");	
   			
   			printf( "Nome: %s\n", pessoa2.nome);
   			printf( "Endereco: %s\n", pessoa2.endereco);
   			printf( "CPF: %s\n", pessoa2.cpf);
   			printf( "RG: %s\n", pessoa2.rg);
   			printf( "Telefone: %s\n", pessoa2.tel);
   			printf( "E-mail: %s\n", pessoa2.email);
   			printf( "Data de nascimento: %s\n", pessoa2.dataNascimento);
		  	  
		  system("pause");
		  return 1;
		}		
		case 2:
		{ int elem;
		  int posicao;
		  printf("\nDigite o elemento para pesquisar na lista: ");
		  scanf("%d",&elem);
		  
		  posicao=pesquisar(elem);
		  if(posicao>0){
		  	printf("O elemento %i estah na posicao %i\n",elem,posicao);
		  }
		  else{
		  	printf("O elemento %i não estah na lista \n",elem);
		  }
 		  printf("\nPressione qualquer tecla para continuar");		  
		  system("pause");
		  return 1;
		}
		case 3:
		{ int elem;
		  printf("\nDigite o elemento para excluir na lista: ");
		  scanf("%d",&elem);
		  excluir(elem);
  		  printf("\nPressione qualquer tecla para continuar");		  
		  system("pause");
		  return 1;
		}

		default:
			printf("\nDigite uma opcao VALIDA! ");
			return 1;
	}	
}

void imprimir()
{
  struct ELista *p;
  p=monitor.prim;
  while(p)
  {
  	printf("\np->elem=[%d]",p->elem);
  	p=p->prox;
  }
}

int pesquisar(int elem)
{
  struct ELista *p;
  int posicao=0;
  p=monitor.prim;  
  while(p)
  {
  	posicao++;
  	if(p->elem==elem){
		return posicao;  
	}  	
  	p=p->prox;
  }
  return posicao;  
}

struct ELista *pesquisar_ponteiro(int elem, struct ELista **ant)
{
  struct ELista *p;  
  p=monitor.prim;  
  *ant=NULL;
  while(p)
  {    		
  	if(p->elem==elem){
		return p;  
	}
	*ant=p;  	
  	p=p->prox;
  }
  return p;  
}

void excluir(int elem)
{
	struct ELista *p;
	struct ELista *ant;
	struct Pessoa *pessoa;
	printf("\nConstruir a funcao de exclusao");
	p=pesquisar_ponteiro(elem, &ant);
	if(pessoa==NULL){
		printf("\nO elemento nao consta na lista\n");
		return;
	}
	printf("\nO elemento encontrado na lista\n");	
	
}

 
 
 

