#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
                - |diferenca| >= 50: "Frio como o coração de sua amada.";
                - 50 > |diferenca| >= 25: "Está chegando próximo a temperatura do Polo Norte.";
                - 25 > |diferenca| >= 12: "Está esquentando...";
                - 12 > |diferenca| >= 6: " Quente, quente, quente.";
                - 6 > |diferenca| >= 1: "Está pelando!";
                - |diferenca| == 0: "Queimou!".

*/

int main() {
	int numeroAleatorio, numeroComparacao, diferenca;

	// mudando a semente para criação do número aleatório
	srand(time(NULL));	

	// criando o número aleatório entre os valores 100 e 0
	numeroAleatorio = (rand() % 101) + 0;
	
	printf("\n\nNumero aleatorio: %d\n\n", numeroAleatorio);
	
	do {
		// recebendo o número para comparação
		printf("Digite um número para comparacao: ");
		scanf("%d", &numeroComparacao);
		
		// calculando a diferença	
		diferenca = abs(numeroAleatorio - numeroComparacao);

		printf("\nDiferenca: %d\n", diferenca);

		// primeiro caso: |diferenca| >= 50
		if (diferenca >= 50) {
			printf("\nFrio como o coração de sua amada.\n\n");

		// segundo caso: 50 > |diferenca| >= 25
		} else if ((diferenca < 50) && (diferenca >= 25)) {
			printf("\nEsta chegando próximo a temperatura do Polo Norte.\n\n");

		// terceiro caso: 25 > |diferenca| >= 12
		} else if((diferenca < 25) && (diferenca >=12)) {
			printf("\nEsta esquentando...\n\n");

		// quanto caso: 12 > |diferenca| >= 6
		} else if((diferenca < 12) && (diferenca >=6)) {
			printf("\nQuente, quente, quente.\n\n");
			
		// quinto caso: 6 > |diferenca| >= 1
		} else if((diferenca < 6) && (diferenca >= 1)) {
		       printf("\nEsta pelando!\n\n");
	      
		// sexto e último caso: diferenca == 0;
		} else {
			printf("\nQueimou!\nO numero aleatorio era: %d\n\n", numeroAleatorio);
		}

	} while( diferenca != 0);

	return 1;
}
