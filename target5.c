#include <stdio.h>

int main() {
    // representação dos interruptores
    int interruptor1 = 1; // interruptor 1 ligado
    int interruptor2 = 1; // interruptor 2 ligado
    int interruptor3 = 0; // interruptor 3 desligado

    // representação das lâmpadas
    int lA = 0; // lâmpada A
    int lB = 0; // lâmpada B
    int lC = 0; // lâmpada C

    // primeira ida: ligando interruptores
    printf("Ligando o Interruptor 1 e o Interruptor 2...\n");

    // simulação das lâmpadas que acenderão
    lA = interruptor1; // lâmpada A ligada ao interruptor 1
    lB = interruptor2; // lâmpada B ligada ao interruptor 2

    // deixe ligado por um tempo (simulação)
    printf("Deixando os interruptores ligados por alguns minutos...\n");

    // desligando o Interruptor 2
    interruptor2 = 0; // agora o interruptor 2 é desligado
    lB = 0;     // lâmpada B agora está apagada

    // segunda ida: indo até a sala das lâmpadas
    printf("\nIndo para a sala das lâmpadas...\n");

    // verificando o estado das lâmpadas
    printf("Lâmpada A: %s\n", lA ? "Acesa" : "Apagada");
    printf("Lâmpada B: %s\n", lB ? "Acesa" : "Apagada");
    printf("Lâmpada C: %s\n", lC ? "Acesa" : "Apagada");

    // Identificando as lâmpadas
    if (lA == 1) {
        printf("A lâmpada A é controlada pelo interruptor 1.\n");
    }

    if (lB == 0) {
        printf("A lâmpada B é controlada pelo interruptor 2.\n");
    }

    // a lâmpada C nunca foi ligada, então é controlada pelo interruptor 3.
    printf("A lâmpada C é controlada pelo interruptor 3.\n");

    return 0;
}