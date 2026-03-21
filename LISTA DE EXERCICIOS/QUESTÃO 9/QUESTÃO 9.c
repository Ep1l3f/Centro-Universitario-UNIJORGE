#include <stdio.h>

// Leia o raio e calcule área e circunferência do círculo.

    int main(){
        #define PI 3.14159

        float raio, area, circunferencia;

        printf("Digite o valor do raio:");
        scanf("%f", &raio);

        area = PI * raio * raio;
        circunferencia = 2 * PI * raio;
        
        printf("Area do circulo: %.2f\n", area);
        printf("Circunferencia do circulo: %.2f\n", circunferencia);


        return 0;




}