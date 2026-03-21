#include <stdio.h>

int main(){
	
//Leia dois números inteiros e calcule: soma, produto e média. Exiba os resultados.

 int soma, produto, num1, num2;
 double media;


 printf("Digite o primeiro numero:\n");
 scanf("%d", &num1);

 printf("Digite o segundo numero:\n");
 scanf("%d", &num2);


 soma = (num1 + num2);
 produto = (num1 * num2);
 media = (num1 + num2) /2.0;


	printf("soma: %d\n", soma);
	printf("produto %d\n", produto);
	printf("media %.2lf\n", media);
	
	
	return 0;

	

}
