#include <stdio.h>

int main (){
	int numeroAlunos;
	    
	printf("Informe a quantidade de alunos na turma: ");
	scanf("%d", &numeroAlunos);
	
	int notas[numeroAlunos] ;
	int i;
	
	for(i = 0; i<numeroAlunos; i++){
		printf("Digite a nota: ");
		scanf("%d", &notas[i]);
	}
	
	for(i = 0; i<numeroAlunos; i++){
		printf("\nNOTA: %d |", notas[i]);
	}
	
return 0;
}
