#include <stdio.h>

int main(){
	
	// Leia um valor em metros e converta para cm e mm. Exiba tudo em uma única saída formatada.


	double metros, centimetros, milimetros;
	

	printf("Digite o valor em metros:\n");
	scanf("%lf", &metros);
	
	
	centimetros = (metros * 100);
    milimetros = (metros * 1000);
    
    
    printf("metros: %.2lf | centimetros: %.2lf | milimetros: %.2lf\n", metros, centimetros, milimetros);
    
    

    return 0;
	
	
	
	
	
}
