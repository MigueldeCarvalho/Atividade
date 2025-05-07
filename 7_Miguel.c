#include <stdio.h>

int main() {
    int codigo, quantidade;
    float preco;

    printf("Digite o código do produto: ");
    scanf("%d", &codigo);

    printf("Digite a quantidade em estoque: ");
    scanf("%d", &quantidade);

    printf("Digite o preço unitário: ");
    scanf("%f", &preco);

    printf("\nCódigo\t\tQuantidade\tPreço Unitário\n");
    printf("%d\t\t%d\t\tR$ %.2f\n", codigo, quantidade, preco);

    return 0;
}
