#include <stdio.h>



int main(){
	
	float altura;
 	float peso;
 	float resultado_imc;
 	
 	
 	printf("Digite a sua altura em metros (Utilize o ponto inves da virgula ex: 1.75):\n");
 	scanf("%f", &altura);
 	
 	printf("Digite o seu peso em kg (Utilize o ponto inves da virgula ex: 75.5):\n");
 	scanf("%f", &peso);
 	
		
	resultado_imc = peso / (altura * altura);
	
	printf("O resultado do seu IMC sera de: %.2f\n", resultado_imc);
		
	
		
		return 0;
		
		
}
