#include <stdio.h>

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
