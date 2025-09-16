#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h> 

int main() {
	char senha[8];
	int caracter;
	int troca;
	char auxiliar;
	int maiuscula;
	int i;

	// intervalos [a, b]
	int a = 97;
	int b = 122;


	// mudar a semente
	srand(time(NULL));

	// gera as letras da senha
	for(i= 0; i<6; i++){
		caracter = (rand() % (b-a)) + a;

		//verifica se muda ou nao para maiúscula com uma chance de 50% de mudar
		maiuscula = (rand() % 10) + 1;
		if (maiuscula >=6) {
			caracter = toupper(caracter);
		}

		senha[i] = caracter;
	}


	// gera os números da senha
	a = 48;
	b = 57;
	for (i=6; i<8; i++){
		caracter = (rand() %(b-a)) + a;
		
		senha[i] = caracter;
	}

	// deixando os dois numeros distantes
	auxiliar = senha[3];
       	senha[3] = senha[6];
	senha[6] = auxiliar;	
	
	// trocando a ordem para dificultar ainda mais
	a=0;
	b=7;
	for(i=0; i<4; i++){
		caracter = (rand() % (b-a))+a;
		troca = (rand() % (b-a))+a;
		auxiliar = senha[caracter];
		senha[caracter] = senha[troca];
		senha[troca] = auxiliar;
	}

	puts("");

	printf("Senha gerada: ");
	for (i=0; i<8; i++)
		printf("%c", senha[i]);

	puts("");

	return 0;
}
