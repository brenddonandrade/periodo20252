#include <stdio.h>

/*Você deve criar um programa que receba as idades de seis alunos de um colégio.
Os alunos e suas respectivas idades são:
        - Pedro:        18 anos;
        - João:         22 anos;
        - Maria:        20 anos;
        - José:         30 anos;
        - Davi:         25 anos;
        - Daniel:       19 anos.

O programa deve exibir uma mensagem final indicando a média da turma. Exemplo:
"A idade média da turma foi de X anos."
*/

int main(){
	int idadePedro, idadeJoao, idadeMaria, idadeJose, idadeDavi, idadeDaniel;
	double idadeMedia;


	// atribuindo a idade de Pedro
	printf("\nDigite a idade de Pedro: ");
	scanf("%d", &idadePedro);
	
	// atribuindo a idade de João
	printf("Digite a idade de Joao: ");
	scanf("%d", &idadeJoao);

	// atribuindo a idade de Maria
	printf("Digite a idade de Maria: ");
	scanf("%d", &idadeMaria);

	// atribuindo a idade de José
	printf("Digite a idade de Jose: ");
	scanf("%d", &idadeJose);

	// atribuindo a idade de Davi
	printf("Digite a idade de Davi: ");
	scanf("%d", &idadeDavi);

	// atribuindo a idade de Daniel
	printf("Digite a idade de Daniel: ");
	scanf("%d", &idadeDaniel);


	// Calculando a idade media
	idadeMedia = (idadePedro + idadeJoao+ idadeMaria + idadeJose + idadeDavi + idadeDaniel)/6.0;

	printf("\n\nA idade média da turma foi de %.1lf anos.\n\n", idadeMedia);
	
	return 0;

}
