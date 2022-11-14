#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main (){
    int notas[10], i, j, repeticao[10];

    for(i = 0; i < 10; i++){
       printf("Informe a nota do aluno %d: ", i);
       scanf("%d", &notas[i]);
    }
    
    for ( i = 0; i < 10; i++){
        for ( j = 0; j < 10; j++){
            if (notas[i]== notas[j]){
                printf("Nota: %d\nIgual a nota(s): %d\n", notas[i], notas[j]);
            }  
        }   
    }   

}
