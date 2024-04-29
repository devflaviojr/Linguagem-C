/*
 ============================================================================
 Name        : Prj_Array_Ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	//Declaração de um array de strings para armazenar tres nomes
	char nomes[3][30]; //supondo nomes com até 30 caracteres

	//Solicitar ao usuário para inserir tres nomes
	for (int i = 0; i < 3; i++){
	printf("Digite o %d nome:", i + 1);
	fflush(stdout);
	scanf("%s", nomes[i]);
	}

	//Imprimir os nomes na ordem inversa
	printf("\nNomes na ordem inversa: \n");
	for(int i = 2; i >= 0; i--){
		printf("%s\n", nomes[i]);
	}

	//Imprimir os nomes e seus comprimentos
	printf("\nNomes e comprimentos:\n");
	for (int i = 0; i < 3; i++) {
		printf("%s - Comprimento: %zu\n", nomes[i], strlen(nomes [i]));
		//%zu é um especificador de formato usado em linguagem C para imprimir valores do tipo size_t
		//Ele é particularmente útil quando voce está trabalhando com funções que retornam valores do
		//como strlen, que retorna o comprimento de uma string.
	}

	return 0;
}
