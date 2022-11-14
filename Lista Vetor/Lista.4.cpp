#include <stdio.h>

int main(){                   
	char letras[10];        
	char i;
	
	for(i=0; i<10; i++){
		printf("Digite a Letra: ");
		scanf("%s", &letras[i]);
	}
	
	printf("\nORDEM INVERSA: ");
	
	for(i=9; i>=0; i--){
		printf("%c ", letras[i]);
	}

return 0;
}
