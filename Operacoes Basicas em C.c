#include <stdio.h>

int main() {
    int num1, num2;
    int adicao, subtracao, multiplicacao, modulo;
    float divisao;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &num2);

    adicao = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;

    if (num2 != 0) {
        divisao = (float)num1 / num2;
        modulo = num1 % num2;
    } else {
        printf("Erro: Divisao por zero nao e permitida.\n");
        divisao = 0;
        modulo = 0;
    }

    printf("\nResultados das operacoes:\n");
    printf("Adicao: %d + %d = %d\n", num1, num2, adicao);
    printf("Subtracao: %d - %d = %d\n", num1, num2, subtracao);
    printf("Multiplicacao: %d * %d = %d\n", num1, num2, multiplicacao);

    if (num2 != 0) {
        printf("Divisao: %d / %d = %.2f\n", num1, num2, divisao);
        printf("Modulo : %d %% %d = %d\n", num1, num2, modulo);
    }

    return 0;
}
