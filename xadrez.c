#include <stdio.h>

// Desafio de Xadrez - MateCheck


int main() {

    int casasTorre = 5;
    int casasBispo = 5;

    printf("Movimento da torre\n");
    // implementando uma estrutura de repetição para a movimentação de cinco casas a direita da torre
    for(int i = 1;i <= casasTorre;i++){
        printf("Direita\n");
    }

    printf("---------------------------------\n");

    printf("Movimento do bispo\n");
    // implementando uma estrutura de repetição de cinco casas "cima direita" do bispo
    int i=1;
    while(i <= casasBispo){
        printf("Cima Direita\n");
        i++;
    }

    return 0;
}
