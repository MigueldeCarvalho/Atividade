#include <stdio.h>

int main() {
    int idade;
    float peso;
    char castrado;

    printf("Digite a idade do seu pet: ");
    scanf("%d", &idade);

    printf("Digite o peso do seu pet: ");
    scanf("%f", &peso);

    printf("Seu pet é castrado? (s para sim, n para não): ");
    scanf(" %c", &castrado); 

    printf("Idade: %d\n", idade);
    printf("Peso: %.2f\n", peso);
    printf("Castrado: %c\n", castrado);

    return 0;
}
