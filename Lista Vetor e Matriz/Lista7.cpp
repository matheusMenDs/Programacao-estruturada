#include <stdio.h>
#include <math.h>

int main (){
	int matriz[3][3];
	int coluna1 = 0;
	int coluna2 = 0;
	int coluna3 = 0;
	int i;
	int j;
	
	for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf ("Informe o valor da matrix [%d] [%d]" , i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
	for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    
	for (i=0; i<3; i++){
        coluna1 = coluna1 + matriz[i][i];
        printf("%d", coluna1); 
    }
    
	for (i=0; i<2; i++){
    	coluna2 = coluna2 + matriz[i][i+1]; 
    }
    
	for (i=0; i<2; i++){ 
       coluna3 = coluna3 + matriz[i+1][i];
    }
    
	printf("Diagonal Principal eh: %d\nValor da diagonal superior eh: %d\nValor da diagonal inferior eh: %d ", coluna1, coluna2, coluna3);
    
}
