#include <stdio.h>

int pertenceFibonacci(int num) {
    int a = 0, b = 1, c = 0;

    // Verificar se o número é 0 ou 1, que pertencem à sequência
    if (num == 0 || num == 1) {
        return 1; // Pertence à sequência
    }

    // Gerar a sequência de Fibonacci até que o valor seja maior ou igual ao número informado
    while (c < num) {
        c = a + b;
        a = b;
        b = c;
    }

    // Verificar se o número informado é igual ao último valor calculado na sequência
    if (c == num) {
        return 1; // Pertence à sequência
    } else {
        return 0; // Não pertence à sequência
    }
}

int main() {
    int num;

    printf("Informe um número: ");
    scanf("%d", &num);

    if (pertenceFibonacci(num)) {
        printf("O número %d pertence à sequência de Fibonacci.\n", num);
    } else {
        printf("O número %d não pertence à sequência de Fibonacci.\n", num);
    }

    return 0;
}
