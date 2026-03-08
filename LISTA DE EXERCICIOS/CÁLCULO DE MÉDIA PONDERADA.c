#include <stdio.h>

int main() {
	
	float trabalho;
	float prova;
	float lista;
	float media;
	
    // PRECISO SABER AS NOTAS DA PROVA, LISTA E TRABALHO
	
	printf("Digite a nota da Prova:\n");
	scanf("%f", &prova);
	
	printf("Digite a nota do Trabalho:\n");
	scanf("%f", &trabalho);
	
	printf("Digite a nota da Lista:\n");
	scanf("%f", &lista);
	
	/* PRECISO CALCULAR A MEDIA PONDERADA DAS NOTAS 
     PESO DAS NOTAS; PROVA = 5, TRABALHO = 3, LISTA =2 */
	
	media = (prova*5 + trabalho*3 + lista*2) / 10;
	
    // TRAZER A CONDI플O DE APROVA플O, REPROVA플O E RECUPERA플O
	
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
	
	
	
