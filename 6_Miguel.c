#include <stdio.h>

int main() {
    float valor_total, valor_desconto;

    printf("Digite o valor total da compra: ");
    scanf("%f", &valor_total);

    printf("Digite o valor da compra com desconto: ");
    scanf("%f", &valor_desconto);

    printf("Valor com desconto: %.2f\n", valor_desconto);
    printf("Valor total: %.2f\n", valor_total);

    return 0;
}
