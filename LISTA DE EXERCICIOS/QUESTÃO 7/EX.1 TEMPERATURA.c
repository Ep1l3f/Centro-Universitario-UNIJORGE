#include <stdio.h>

// Leia a temperatura do servidor, informe se o sistema está:
// Normal ( 60°C); Alerta (Entre 60° C e 80°C); Crítico (Acima de 80°C)

int main() {
	
	float temperatura;
	
		printf("Digite a temperatura do servidor:");
		scanf("%f", &temperatura);
	
		if(temperatura <= 60) {
	    	printf("Sistema em estado: NORMAL\n");
				
		}
	
	  	else if (temperatura > 60 && temperatura <= 80) {
		    printf("Sistema em estado: ALERTA\n");
		  
	    }
		else {	
		   printf("Sistema em estado: CRITICO\n");
		}
	
	return 0;

}
