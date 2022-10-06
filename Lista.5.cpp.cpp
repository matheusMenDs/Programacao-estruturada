#include <stdio.h>

int main(){
    int numero[80];
	int i;
	int j;
	int cont=0;
	int tam;

    do{
        printf("Informe o tamanho do vetor: ");
        scanf("%d", &tam);
    }
	
	while(tam > 80);

    printf("\n");

    for(i=0; i<tam; i++){
        printf("Informe o numero: ");
        scanf("%d", &numero[i]);
    }

    printf("\n");

    printf("Informe um numero que deseja buscar: ");
    scanf("%d", &j);

    printf("\n");

    for(i=0; i<tam; i++){
        if(numero[i] == j){
            cont++;
        }

    }

    printf("Apareceram %d numeros iguais ao informado", cont);

return 0;
}
