#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "ListaSequencial.h"

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	

		
	Lista* li = cria_lista();
	
	int tamanho = tamanho_lista(li);
	printf("O tamanho da lista �: %d\n", tamanho);
	
	int cheia = lista_cheia(li);
	if (lista_cheia(li)) {
		printf("A lista est� cheia\n");
	} else {
		printf("A lista n�o est� cheia\n");
	}
	
	int vazia = lista_vazia(li);
	if (lista_vazia(li)) {
		printf("A lista est� vazia\n");
	} else {
		printf("A lista n�o est� vazia\n");
	}
	struct aluno a[4] = {{2, "Andre", 9.5, 7.8, 8.5},
		{4, "Ricardo", 7.5, 8.7, 6.8},
		{1, "Bianca", 9.7, 6.7, 8.4},
		{3, "Ana", 5.7, 6.1, 7.4}};
		
	struct aluno novos_dados[1] = {{3, "Ana", 5.7, 6.1, 7.4}};
	
	if (insere_lista_final(li, a[1])) {
		printf("Aluno introduzido com sucesso\n");
	} else {
		printf("Impossivel introduzir o aluno\n");
	}
	
	if (insere_lista_inicio(li, a[2])) {
		printf("Aluno introduzido com sucesso\n");
	} else {
		printf("Impossivel introduzir o aluno\n");
	}
	
	if (insere_lista_ordenada(li, a[3])) {
		printf("Aluno introduzido com sucesso\n");
	} else {
		printf("Impossivel introduzir o aluno\n");
	}
	
	if (remove_lista_final(li)) {
		printf("Item removido com sucesso.\n");
	} else {
		printf("Ocorreu algum erro a remover o item.\n");
	}
	
	if (remove_lista_inicio(li)) {
		printf("Item removido com sucesso.\n");
	} else {
		printf("Ocorreu algum erro a remover o item.\n");
	}
	
	if (remove_lista(li, 3)) {
		printf("Item removido com sucesso.\n");
	} else {
		printf("Ocorreu algum erro a remover o item.\n");
	}
	
	insere_lista_final(li, a[0]);
	
	struct aluno al;
	if (consulta_lista_pos(li, 1, &al)) {
		printf("N�mero: %d\nNome: %s\nNotas:\n\t1�: %.2f\n\t2�: %.2f\n\t3�: %.2f\n", al.matricula, al.nome, al.n1, al.n2, al.n3); 
	} else {
		printf("N�o foi possivel encontrar o registo.\n");
	}
	
	
		
	liberta_lista(li);
	return 0;
}
