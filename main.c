#include <stdio.h>
// #include <math.h>

int main() {

    // Imprime o cabeçalho do jogo
    printf("******************************\n");
    printf("* Bem vindo ao Guess Number! *\n");
    printf("******************************\n");

    int secNumber = 42;

    int chute;

    printf("Chute um numero: ");
    scanf("%d", &chute);

    if (chute == secNumber) {
        printf("Parabens, voce acertou o numero secreto!");
    } else {
        printf("Tente novamente!");
    }

}
