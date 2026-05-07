#include <stdio.h>

// Função recursiva para movimentar o Bispo
void moverBispo(int casas) {
    if (casas == 0) {
        return;
    }

    printf("Cima Direita\n");
    moverBispo(casas - 1);
}

// Função recursiva para movimentar a Torre
void moverTorre(int casas) {
    if (casas == 0) {
        return;
    }

    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para movimentar a Rainha
void moverRainha(int casas) {
    if (casas == 0) {
        return;
    }

    printf("Esquerda\n");
    moverRainha(casas - 1);
}

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
    const int movimentosCima = 2;
    const int movimentosDireita = 1;

    // Variáveis usadas nos loops do Cavalo e do Bispo
    int movimentoVertical;
    int movimentoHorizontal;
    int movimentoTotal;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    // O Bispo irá se mover 5 casas na diagonal para cima e à direita.
    // Para representar a diagonal, imprimimos as duas direções juntas.

    printf("Movimento do Bispo:\n");

    // Chamada da função recursiva do Bispo.
    // A recursividade substitui o loop simples usado no nível novato.
    moverBispo(casasBispo);

    // Loops aninhados para representar a lógica da diagonal do Bispo.
    // O loop externo representa o movimento vertical para cima.
    // O loop interno representa o movimento horizontal para a direita.
    for (movimentoVertical = 1; movimentoVertical <= casasBispo; movimentoVertical++) {
        for (movimentoHorizontal = 1; movimentoHorizontal <= 1; movimentoHorizontal++) {
            // A saída do Bispo já foi feita pela função recursiva.
            // Este bloco mostra a ideia do movimento vertical + horizontal.
        }
    }

    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    // A Torre irá se mover 5 casas para a direita usando o loop for.

    printf("Movimento da Torre:\n");

    // Chamada da função recursiva da Torre.
    // Cada chamada imprime uma casa para a direita.
    moverTorre(casasTorre);

    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    // A Rainha irá se mover 8 casas para a esquerda usando o loop do-while.

    printf("Movimento da Rainha:\n");

    // Chamada da função recursiva da Rainha.
    // Cada chamada imprime uma casa para a esquerda.
    moverRainha(casasRainha);

    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("Movimento do Cavalo:\n");

    // O Cavalo agora se move em L:
    // duas casas para cima e uma casa para a direita.
    // O loop externo possui múltiplas variáveis.
    for (movimentoVertical = 1, movimentoTotal = 1;
         movimentoVertical <= movimentosCima;
         movimentoVertical++, movimentoTotal++) {

        printf("Cima\n");

        // Loop interno representa o movimento horizontal.
        for (movimentoHorizontal = 1;
             movimentoHorizontal <= movimentosDireita;
             movimentoHorizontal++) {

            // Enquanto ainda não terminou os dois movimentos para cima,
            // o movimento para a direita é ignorado.
            if (movimentoVertical < movimentosCima) {
                continue;
            }

            printf("Direita\n");
            break;
        }
    }

    printf("\n");

    return 0;
}
