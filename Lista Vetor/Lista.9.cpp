#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int c,i;
    
	printf("Informe a quantidade de funcionarios: ");
    	scanf("%d", &c);
    
	int meses[c],matricula[c],recente[3],mvelho;
    
	for ( i = 0; i < c; i++){
         if (matricula[i] == 0){
            break;
        }
   	 printf("Informe os meses que funcionario %d trabalha: ", i);
    	scanf("%d", &meses[i]);
    	}
    
	for ( i = 0; i < c; i++){
        if (meses[i] > mvelho){
            mvelho = meses[i];
        }   
    }
    
	for ( i = 0; i < c; i++){
        if (meses[i] <= mvelho){
            mvelho = meses[i];
            recente[i] = meses[i];
        }   
    }
    
	for ( i = 0; i < c; i++){
        if ( meses[i] == recente[i]){
            printf("Funcionario mais recente eh: %d com %d meses\n", i, recente[i]);
        } 
    }
    
}
