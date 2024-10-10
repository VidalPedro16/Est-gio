#include <stdio.h>

int pertenceFibonacci(int num) {
    int a = 0, b = 1, c = 0;

    if (num == 0 || num == 1) {
        return 1; 
    }

    while (c < num) {
        c = a + b;
        a = b;
        b = c;
    }

    if (c == num) {
        return 1; 
    } else {
        return 0; 
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
