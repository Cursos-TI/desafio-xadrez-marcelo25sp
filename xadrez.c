#include <stdio.h>

// Desafio de Xadrez - MateCheck


int main() {

    int casasTorre = 5;

    printf("Movimento da torre\n");

    // implantando uma estrutura de repetição para a movimentação de cinco casas a direita da torre
    for(int i = 1;i <= casasTorre;i++){
        printf("Direita\n");
    }

    return 0;
}
