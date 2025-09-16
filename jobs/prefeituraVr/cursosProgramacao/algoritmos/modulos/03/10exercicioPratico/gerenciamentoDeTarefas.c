#include <stdio.h>
#include <stdlib.h>

// criando uma estrutura para representar uma tarefa
typedef struct tipo_tarefa {
	int quantidade_de_tarefas;
	int id;
	char descricao [80];
} tarefa;


// criando uma estrutura para representar uma lista
typedef struct tipo_lista{
	tarefa *t;
} lista;


int main() {
	lista minha_lista;

	// alocando a memória para 20 tarefas
	// esta lista pode alocar apenas 20 tarefas
	minha_lista.t = malloc(sizeof(tarefa) * 20);


	// testando se o sistema tem memória para realizar esta tarefa
	if(minha_lista.t == NULL){
		printf("Erro ao alocar memória.\n");
		return 1;
	}
		

	// atribuindo tarefas
	

	free(minha_lista);
	return 0;
}


