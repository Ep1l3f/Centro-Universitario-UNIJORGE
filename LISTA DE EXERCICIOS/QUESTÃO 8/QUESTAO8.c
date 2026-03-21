#include <stdio.h>

 //Leia um inteiro e calcule: quadrado, cubo e resto por 3.

    int main(){

    int n, quadrado, cubo, resto;

    printf("Digite um numero inteiro\n");
    scanf("%d", &n);

    quadrado = (n * n);
    cubo = (n * n * n);
    resto = (n % 3);

    printf("Quadrado: %d\n", quadrado);
    printf("Cubo: %d\n", cubo);
    printf("Resto: %d\n", resto);



    return 0;


}