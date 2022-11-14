#include <stdio.h>
#include <math.h>

int main(){
    int num[6][6];
    int i;
    int j;
    
	for(i=0; i<6; i++){
        for (j=0; j<6; j++){
        	printf("Informe o tamanho da Matriz: [%d] [%d]: ", i, j);
        	//fflush(stdin);
        	//fgets(num[i][j],10,stdin);
			scanf("%d", &num[i][j]);
        }  
    }
    
	for(i=1; i<6; i++){
        for ( j=0; j<6; j++){
            printf("%d\n", num[i][j]);
        }
    }
}
