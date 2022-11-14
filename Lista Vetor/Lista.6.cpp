#include <stdio.h>
#include <stdlib.h>                
                                 
int main(){                      
    char matricula[4][4];
    float salario[4];
	float menorValor = 999999;
	float maiorValor = 0;

	for (int i = 1; i < 4; i++){
    printf("Digite o Numero da Matricula do %d Empregado: ", i);
    scanf("%s", &matricula[i]);
    printf("Digite o Salario do %d Empregado: ", i);
    scanf("%f", &salario[i]);
	}

	system("clear||cls");

	for (int i = 1; i < 4; i++){
    printf("%s recebe %.2f Reais de Salario\n", matricula[i], salario[i]);
    for (int i = 1; i < 4; i++){
        if (salario[i] < menorValor){
            menorValor = salario[i];}
 		} 
	}
	
	printf("Menor Salario: %.2f\n", menorValor);
	
	for (int i = 0; i < 4; i++){
    if (salario[i] > maiorValor){
        maiorValor = salario[i];}
	}

	printf("Maior Salario: %.2f\n", maiorValor);

return 0;
}

