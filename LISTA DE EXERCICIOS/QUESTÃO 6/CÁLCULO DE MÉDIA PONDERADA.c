#include <stdio.h>

int main() {
	
	float trabalho;
	float prova;
	float lista;
	float media;
	
	
	printf("Digite a nota da Prova:\n");
	scanf("%f", &prova);
	
	printf("Digite a nota do Trabalho:\n");
	scanf("%f", &trabalho);
	
	printf("Digite a nota da Lista:\n");
	scanf("%f", &lista);
	
	
	media = (prova*5 + trabalho*3 + lista*2) / 10;
	
	
	if (media >= 7 )	{
		
		printf("Aprovado\n");
	}
	
	else if (media >= 5 && media < 7) {
		printf("Recuperacao\n");
	}
	
	else {
		
		printf("Reprovado\n");
		
	}
	
	return 0;
	
}
	
	
	
