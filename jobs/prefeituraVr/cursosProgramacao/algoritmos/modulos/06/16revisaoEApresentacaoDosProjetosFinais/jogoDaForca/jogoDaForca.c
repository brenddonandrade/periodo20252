#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_TENTATIVAS 6

void desenharForca(int erros) {
    printf("\n ------\n");
    printf(" |    |\n");
    printf(" |    %c\n", (erros >= 1) ? 'O' : ' ');
    printf(" |   %c%c%c\n", (erros >= 3) ? '/' : ' ', (erros >= 2) ? '|' : ' ', (erros >= 4) ? '\\' : ' ');
    printf(" |   %c %c\n", (erros >= 5) ? '/' : ' ', (erros >= 6) ? '\\' : ' ');
    printf("_|_\n\n");
}

int main() {
    char palavraSecreta[] = "computador";
    int tamanho = strlen(palavraSecreta);
    char letra;
    int tentativas = MAX_TENTATIVAS;
    int acertos = 0;
    char descobertas[tamanho];
    int letrasUsadas[26] = {0}; // Para evitar letras repetidas
    int erros = 0;

    for (int i = 0; i < tamanho; i++) {
        descobertas[i] = '_';
    }

    printf("=== Jogo da Forca ===\n");

    while (tentativas > 0 && acertos < tamanho) {
        desenharForca(erros);

        printf("Palavra: ");
        for (int i = 0; i < tamanho; i++) {
            printf("%c ", descobertas[i]);
        }

        printf("\nTentativas restantes: %d", tentativas);
        printf("\nDigite uma letra: ");
        scanf(" %c", &letra);
        letra = tolower(letra);

        if (letrasUsadas[letra - 'a']) {
            printf("Você já tentou a letra '%c'. Tente outra.\n", letra);
            continue;
        }

        letrasUsadas[letra - ' '] = 1;

        int encontrou = 0;
        for (int i = 0; i < tamanho; i++) {
            if (palavraSecreta[i] == letra && descobertas[i] == '_') {
                descobertas[i] = letra;
                acertos++;
                encontrou = 1;
            }
        }

        if (!encontrou) {
            printf("Letra incorreta!\n");
            tentativas--;
            erros++;
        }
    }

    desenharForca(erros);

    if (acertos == tamanho) {
        printf("Parabéns! Você descobriu a palavra: %s\n", palavraSecreta);
    } else {
        printf("Fim de jogo! A palavra era: %s\n", palavraSecreta);
    }

    return 0;
}

