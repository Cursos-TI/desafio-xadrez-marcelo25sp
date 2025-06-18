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

    // implementando uma estrutura movendo o cavalo utilizando loops aninhados com múltiplas variáveis e(ou) condições
    printf("Movimento do Cavalo (em L para cima e direita)\n");
    int passosCima = 0;
    int passosDireita = 0;

    for (int i = 0; i < 3; i++) { // 3 tentativas de movimento, mas só 1 será válida
        for (int j = 0; j < 3; j++) {
            if (i == 2 && j == 1) {  // Movimento em L válido: 2 pra cima, 1 pra direita
                while (passosCima < 2) {
                    printf("Cima\n");
                    passosCima++;
                }
                while (passosDireita < 1) {
                    printf("Direita\n");
                    passosDireita++;
                }
                break; // após o movimento em L, sai do loop
            } else {
                continue; // ignora combinações que não representam o L
            }
        }
    }

    return 0;
}
