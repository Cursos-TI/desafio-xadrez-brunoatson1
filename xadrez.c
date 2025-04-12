#include <stdio.h>

int main() {
    // Vamos simular o movimento da TORRE

    // A torre se move para a DIREITA em linha reta
    printf("Movimento da TORRE:\n"); // Imprime uma mensagem na tela

    // Queremos que a torre se mova 5 casas para a direita
    int numero_de_casas_torre = 5; // Guardamos o número 5 em uma variável chamada numero_de_casas_torre

    // Vamos usar o comando FOR para repetir a ação de mover para a direita
    // O loop FOR vai contar de 0 até 4 (total de 5 vezes)
    for (int i = 0; i < numero_de_casas_torre; i++) {
        printf("Direita\n"); // A cada vez que o loop roda, imprimimos "Direita"
    }

    printf("\n"); // Imprime uma linha em branco para separar os movimentos das peças


    // Agora vamos simular o movimento do BISPO

    // O bispo se move na DIAGONAL (para cima e para a direita)
    printf("Movimento do BISPO:\n"); // Imprime uma mensagem

    // Queremos que o bispo se mova 5 casas na diagonal
    int numero_de_casas_bispo = 5; // Guardamos o número 5 em uma variável

    // Vamos usar o comando WHILE para repetir o movimento do bispo
    int contador_bispo = 0; // Criamos um contador que começa em 0
    while (contador_bispo < numero_de_casas_bispo) {
        printf("Cima, Direita\n"); // A cada vez, imprimimos "Cima, Direita"
        contador_bispo = contador_bispo + 1; // Aumentamos o contador em 1 para o loop continuar até 5
    }

    printf("\n"); // Linha em branco


    // Por último, vamos simular o movimento da RAINHA

    // A rainha se move para a ESQUERDA em linha reta
    printf("Movimento da RAINHA:\n"); // Imprime uma mensagem

    // Queremos que a rainha se mova 8 casas para a esquerda
    int numero_de_casas_rainha = 8; // Guardamos o número 8

    // Vamos usar o comando DO-WHILE para repetir o movimento da rainha
    int contador_rainha = 0; // Criamos um contador que começa em 0
    do {
        printf("Esquerda\n"); // Imprimimos "Esquerda"
        contador_rainha = contador_rainha + 1; // Aumentamos o contador
    } while (contador_rainha < numero_de_casas_rainha); // O loop continua ENQUANTO o contador for menor que 8

    printf("\n"); // Linha em branco

    return 0; // Indica que o programa terminou corretamente
}