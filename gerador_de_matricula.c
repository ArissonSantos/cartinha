/*Código feito para a aula de Projeto Interdisciplinar 1, onde fiz um algoritmo que a partir de um padrão, cria matriculas.
 Para utilizar, é necessário colocar as iniciais do nome em letras maiusculas, e a data de nascimento de forma simples, segue exemplo : FMS. DDMMAA 151103.*/

#include <stdio.h>
#include <stdlib.h>


int main() {
	
	char nome[5],datan[6];
	
	printf("---------------CADASTRO DE MATRICULAS--------------\n");
	printf("---------------------------------------------------\n");
	printf("-Insira as iniciais do nome em letra maiuscula-\n EX: FMS\n Nome: ");
	scanf("%s",&nome);
	
	printf("---------------------------------------------------\n");
	printf("-Insira a data de nascimento de forma simples ou somente ano\n EX: 151498 ou 98\n Data de Nascimento: ");
	scanf("%s",&datan);
	
	printf("\n---------------------------------------------------\n");
	printf("---------------------------------------------------\n");
	
	printf("#%s%s\n",nome,datan);
	
	printf("---------------------------------------------------\n");


	
	return 0;
}
