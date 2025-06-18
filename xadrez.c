#include <stdio.h>

// Desafio de Xadrez - MateCheck


int main() {

    // variáveis que serão utilizadas nas estruturas de repetição
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

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

    printf("---------------------------------\n");

    printf("Movimento da rainha\n");
    // implementando uma estrutura de repetição de cinco casas "esquerda" da rainha
    i = 1;
    do{
        printf("esquerda\n");
        i++;
    }while(i <= casasRainha);

    printf("--------------------------------------\n");

    printf("Movimento do cavalo(em L para baixo e esquerda)\n");
    // implementando uma estrutura de repetição(em L) do Cavalo
    int numMovimentos =4;
    int passosParaBaixo =3;

    for(int i = 1; i <= numMovimentos;i++){
        int j= 0;
        while(j < passosParaBaixo){
            printf("Baixo\n");
            j++;
        }
        printf("Esquerda\n");
    }

    return 0;
}
