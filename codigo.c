//Código feito para o projeto da matéria de Projeto Interdisciplinar, que tem como fim auxiliar o usuario a cadastrar crianças no sistema, visto que, 
//é presente o problema de organização ao guardar os cadastros, pois não existe um padrão correto para sanar o problema. 
//Com isso, o algoritmo foi criado com o intuito de automatizar o processo de matriculas, criando um padrão, facilitando assim o trabalho do usuário.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main() {
	
	setlocale(LC_ALL,"");
	
	int datan,opcao;
	char nomeresp[50],cpfresp[50],cidade[80],rua[50],numrua[50],nome[50],cpf[50],letters[10];
	
		printf("---------- BEM VINDO AO SISTEMA DE CARTINHAS ----------\n"); 
		
		printf("---------- DADOS DO RESPONSÁVEL ----------\n");  /*Cadastro do responsável*/
			
			printf("Informe o nome: ");
			scanf(" %[^\n]s",&nomeresp);
		
			printf("Informe o CPF: ");
			scanf("%s",&cpfresp);
		
			printf("Informe a cidade: ");
			scanf(" %[^\n]s",&cidade);
			
			printf("Informe a rua: ");
			scanf(" %[^\n]s",&rua);
			
			printf("Informe o número: ");
			scanf(" %[^\n]s",&numrua);
		
				system ("cls");
			
		printf("---------- DADOS DA CRIANÇA ----------\n"); /*Cadastro da Criança*/
		
			printf("Informe o nome da criança: ");
			scanf(" %[^\n]s",&nome);
			
			printf("Informe o CPF: ");
			scanf("%s",&cpf);
			
			printf("Informe a data de nascimento de forma simples ex:DDMMAA: ");
			scanf("%d",&datan);
		
				system ("cls");
			
		printf("---------- GERAR MATRICULA ----------\n"); /*Processo para criar a matricula e finalizar cadastro*/
		
			printf("Insira a primeira letra de cada nome da criança, de forma maiuscula: ");
			fflush(stdin);
			scanf("%s",&letters);	
			
			printf("-\n");
			printf("-\n");
			printf("-\n");
			printf("-\n");
			
			printf("DIGITE 1 PARA CONTINUAR A OPERAÇÃO E 2 PARA VOLTAR AO CADASTRO ");
			fflush(stdin);
			scanf("%d",&opcao);				
				
				system ("cls");
				
			switch (opcao){
				case 1:
					printf("CADASTRO REALIZADO COM SUCESSO!\n");
					printf("---------- DADOS DO RESPONSÁVEL ----------\n");
						printf("%s\n",nomeresp);
						printf("%s\n",cpfresp);
						printf("%s %s %s\n",cidade,rua,numrua);
					printf("------------------------------\n");
						printf("----------- DADOS DA CRIANÇA ----------\n");
						printf("%s\n",nome);
						printf("%d\n",datan);
						printf("%s\n",cpf);
					printf("------------------------------\n");
						printf("MATRICULA DA CRIANÇA : #%s%d\n",letters,datan);
						break;
				case 2:
					return main();
					break;
				default:
					printf("OPÇÃO INVÁLIDA\n");
					break;
						
					}
	
		return 0;
}
