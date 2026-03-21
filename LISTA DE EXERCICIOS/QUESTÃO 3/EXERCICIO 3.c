#include <stdio.h>

//Leia três números reais e calcule: soma, média e produto.


int main() {
    float num1, num2, num3;
    float soma, media, produto;

    printf("Digite tres numeros reais:\n");
    scanf("%f %f %f", &num1, &num2, &num3);

    soma = num1 + num2 + num3;
    media = soma / 3;
    produto = num1 * num2 * num3;

    printf("Soma: %.2f\n", soma);
    printf("Media: %.2f\n", media);
    printf("Produto: %.2f\n", produto);

    return 0;
}
