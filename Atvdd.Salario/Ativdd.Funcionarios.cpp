/* Elabore um programa que receba o salario de 16 funcionarios, em uma matriz 4x4. 
Os nomes funcionarios devem estar em um vetor de 4 posi��es . imprima os nomes e os salarios */

#include <stdio.h>       

int main(){
	int i;
	int j;
	int matriz[4][4];
	char funcionarios[4][50];
	
	for(i=0; i<4; i++){
		printf("Digite o nome do funcionario %i: ", i+1);
		scanf("%s", &funcionarios[i]);
	}
	
	for (i=0; i<4; i++){                    
		for (j=0; j<4; j++){
	 		printf("Digite o salario do funcionario %i no mes %i: ", i+1, j+1);
     		scanf("%i", &matriz[i][j]);
		}	
    }	

	for (i=0; i<4; i++){
		for (j=0; j<4; j++){
        	printf("Salario do funcionario %i (%s):%i\n", i+1, funcionarios[i], matriz[i][j]);
		}
	}

return 0;
}
