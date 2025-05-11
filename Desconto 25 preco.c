#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "");

    float precoProduto;
    float desconto = 0.25;

    printf("Digite o preco do produto (use ponto como separador decimal, ex: 100.50): R$ ");
    scanf("%f", &precoProduto);

    float precoComDesconto = precoProduto - (precoProduto * desconto);

    printf("O preco do produto com desconto de 25%% e: R$ %.2f\n", precoComDesconto);

    return 0;
}
