#include <stdio.h>
#include <math.h>

int main(){
    int matriz[10][3];
    int piorNota[3];
	int pior = 100;
	int aluno[3];
	int materia[3];
	int i;
	int j;
    
	for(i=0; i<10; i++){
        for (j=0; j<3; j++){
            printf("Informe a nota %d do aluno: %d [%d] [%d]: ", j, i, i, j);
            scanf("%d", &matriz[i][j]);
        } 
    }
    
    for (j=0; j<3; j++){
        pior = 100;
        for(i=0; i<10; i++){
            if (matriz[i][j] < pior){
                pior = matriz[i][j];
                piorNota[j] = matriz[i][j];
                aluno[j] = i;
                materia[j] = j;
            }
        } 
    }
    
    for (i=0; i<3; i++){
        printf("Pior aluno na materia: %d\nFoi: %d\nCom %d", i, aluno[i], piorNota[i]);
    }
    
}
