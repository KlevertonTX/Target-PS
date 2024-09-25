#include <stdio.h>

//funçao que calcula fibonacci
int Fibonacci(int num) {
    int a = 0, b = 1, c;
    
   //se for digitado 0 ou 1 já está na sequência
    if (num == 0 || num == 1) {
        return 1;
    }

   //encontra o valor maior ou igual ao digitado
    while (b < num) {
        c = a + b;
        a = b;
        b = c;
    }
    //verifica se o  numero  é igual ao ultimo calculado
    if (b == num) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;
    
    printf("Informe um número: ");
    scanf("%d", &num);
    
    // verifica se o número pertence a sequência de Fibonacci
    if (Fibonacci(num)) {
        printf("O número %d pertence a sequência de Fibonacci.\n", num);
    } else {
        printf("O número %d NÃO pertence a sequência de Fibonacci.\n", num);
    }

    return 0;
}