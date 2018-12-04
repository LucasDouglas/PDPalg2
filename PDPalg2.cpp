#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define TAM 2

struct cad_visitante {
	
    int id;
	char nome[50];
	int Cpf;
	char email[75];
	char DataNasc[10];
	char DataCad[10];
};

int main () {
	
	
		setlocale(LC_ALL,"");

	struct cad_visitante visitante[TAM] ;
	int i,op ;
    int CPFPesquisa = 0;
    int cpf2 = 0;
    char nome2[20];
	
	
	printf("\nOpção 1 = Cadastrar");
	printf("\nOpção 2 = Mostrar todos");
	printf("\nOpção 3 = Procurar por CPF");
	printf("\nOpcão 0 =  sair\n");
	fflush(stdin);
	scanf("%i", &op);
    while(op != 0){

	

	
	
	switch (op){
		for(i = 0; i < TAM; i++){
		
		case 1:
		
	   	visitante[i].id = i+1;
		
		fflush(stdin);
		printf("\n Informe o nome do visitante:");
		gets(visitante[i].nome);
		
		fflush(stdin);
		printf("\n Informe o CPF do visitante:");
		scanf("%d", &visitante[i].Cpf);
		
				
		fflush(stdin);
		printf("\n Informe o E-Mail do visitante:");
		scanf("%s", &visitante[i].email);
		
		fflush(stdin);
		printf("\n Informe a Data de nascimento:");
		scanf("%s", &visitante[i].DataNasc);
		
		fflush(stdin);
		printf("\n Informe a Data de cadastro:");
		scanf("%s", &visitante[i].DataCad);
					
		}
		
		break;
		
		case 2: 
			for(i = 0; i < TAM; i++){
		
		printf("\n---------------------------------------------------\n");	
	    printf("O id do visitante é: %i\n",visitante[i].id );
		printf("O nome do visitante é: %s\n", visitante[i].nome);
	    printf("O CPF: %d\n", visitante[i].Cpf);
	    printf("O E-Mail: %s\n", visitante[i].email);
	    printf("Data de nascimento: %s\n", visitante[i].DataNasc);
	    printf("Data de Cadastro: %s\n", visitante[i].DataCad);
	    printf("\n---------------------------------------------------\n");
		
		}
		break;
		
	
		
		
		case 3:
			printf("\nInforme o CPF para pesquisa: ");
			fflush(stdin);
			scanf("%d", &CPFPesquisa);

				for(i = 0; i < TAM; i++){
					if(CPFPesquisa == visitante[i].Cpf ){
						strcpy(nome2, visitante[i].nome);
						cpf2 = visitante[i].Cpf;					  
				}
			}
			if(cpf2 != 0 ){
			         	printf("\n---------------------------------------------------\n");
						printf("O nome do visitante é: %s\n", nome2);
					    printf("O CPF: %d \n", cpf2);
					    printf("\n---------------------------------------------------\n");
					    cpf2 = 0;
					
					    
				
					
			}
				else{
					printf("\n---------------------------------------------------\n");
					printf("CPF não cadastrado!");
				printf("\n---------------------------------------------------\n");
				}			
	
	break;
	
	default :
		
	
		break;
}
	printf("\nOpção 1 = Cadastrar");
	printf("\nOpção 2 = Mostrar todos");
	printf("\nOpção 3 = Procurar por CPF");
	printf("\nOpcão 0 =  sair\n");
	fflush(stdin);
	scanf("%i", &op);
}
}
