#include <stdio.h>

// Desafio de Xadrez - MateCheck

// criando uma função recursiva para a torre
void moverTorre(int passoAtual, int totalPassos){
    if(passoAtual > totalPassos){
        return;
    }
    printf("Direita\n");
    moverTorre(passoAtual + 1, totalPassos);
}

//criando uma função recursiva para o bispo
void moverBispo(int passoAtual, int totalPassos) {
    if (passoAtual > totalPassos) {
        return;
    }
    printf("Cima Direita\n");
    moverBispo(passoAtual + 1, totalPassos);
}

// criando uma função recursiva para a rainha
void moverRainha(int passoAtual, int totalPassos) {
    if (passoAtual > totalPassos) {
        return;
    }
    printf("Esquerda\n");
    moverRainha(passoAtual + 1, totalPassos);
}

int main() {

    // variáveis que serão utilizadas nas estruturas de repetição
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("Movimento da torre\n");
    // implementando uma estrutura utilizando conceitos de recursividade para mover a torre
    moverTorre(1, casasTorre);

    printf("---------------------------------\n");

    printf("Movimento do bispo\n");
    // implementando uma estrutura utilizando conceitos de recursividade para mover o bispo
    moverBispo(1, casasBispo);

    printf("---------------------------------\n");

    //implementando uma estrutura utilizando conceitos de recursividade para mover a rainha
    printf("Movimento da Rainha:\n");
    moverRainha(1, casasRainha);

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
