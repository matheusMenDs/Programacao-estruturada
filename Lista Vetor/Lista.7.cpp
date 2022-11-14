#include <stdio.h>
#include <stdlib.h>     

int main() {                                         
	double cd[5], cd10[5], cdx[5], porcentagem;   
	int i;
	 
	for(i=0;i<5;i++) {
	 	printf("Digite o valor do CD: ");
	 	scanf("%lf", &cd[i]);
	}
	 
	for(i=0;i<5;i++){
		cd10[i] = cd[i] + cd[i] * 0.10;
	}
	for(i=0;i<5;i++) {
		printf("Esse e o valor com juros:\n %lf\n", cd10[i]);

	}
	
	printf("Vendedor, digite a procentagem que voce deseja acrescentar: ");
	scanf("%lf", &porcentagem);

	for(i=0;i<5;i++){
		cdx[i] = cd[i] + cd[i] * (porcentagem/100);
	}	
	
	for(i=0;i<5;i++) {
		printf("\nEsse e o valor com acrescimo de %lf:\n %lf", porcentagem, cdx[i]);
	}
	 
return 0;
}
