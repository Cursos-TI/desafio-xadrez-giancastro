#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    const int casasBispo = 5;
    const int casasTorre = 5;
    const int casasRainha = 8;

    // Variáveis do movimento do cavalo
    const int movimentosBaixo = 2;
    const int movimentosEsquerda = 1;

    int contador;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    // O Bispo irá se mover 5 casas na diagonal para cima e à direita.
    // Para representar a diagonal, imprimimos as duas direções juntas.

    printf("Movimento do Bispo:\n");

    contador = 1;
    while (contador <= casasBispo) {
        printf("Cima Direita\n");
        contador++;
    }

    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    // A Torre irá se mover 5 casas para a direita usando o loop for.

    printf("Movimento da Torre:\n");

    for (contador = 1; contador <= casasTorre; contador++) {
        printf("Direita\n");
    }

    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    // A Rainha irá se mover 8 casas para a esquerda usando o loop do-while.

    printf("Movimento da Rainha:\n");

    contador = 1;
    do {
        printf("Esquerda\n");
        contador++;
    } while (contador <= casasRainha);

    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("Movimento do Cavalo:\n");

    // Loop FOR representando o movimento vertical
    for (contador = 1; contador <= movimentosBaixo; contador++) {

        // Loop WHILE representando o movimento horizontal
        int passoHorizontal = 1;

        while (passoHorizontal <= movimentosEsquerda) {

            // Imprime o movimento para baixo
            printf("Baixo\n");

            // No último movimento vertical, executa o movimento para esquerda
            if (contador == movimentosBaixo) {
                printf("Esquerda\n");
            }

            passoHorizontal++;
        }
    }

    printf("\n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
