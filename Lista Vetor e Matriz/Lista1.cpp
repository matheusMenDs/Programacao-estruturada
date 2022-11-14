#include <stdio.h>
#include <math.h>

int main(){
    int matricula[4];
    int notas[4];
    int i;
    int continua;
    int count = 0;
    int pesquisa;
    
    for ( i = 0; i < 4; i++){
        printf("Informe a matricula do aluno %d: ",i+1);
        scanf("%d", &matricula[i]);
        printf("Informe a nota do aluno %d: ",i+1);
         scanf("%d",&notas[i]);
        printf("Deseja inserir um usuario [1 ou 0]: ");
        fflush(stdin);
        scanf("%d", &continua);
        count ++;
                
        if(continua == 0){
            printf("Pessoas cadastradas: %d\n\n", count);
            break;
        }
    }
    
	for ( i = 0; i < 10; i++){
        printf("Deseja consultar alguma nota [1 ou 0]: ");
        scanf("%d",&continua);
        if (continua == 1){
            printf("Informe a matricula: ");
            scanf("%d",&pesquisa);
            for ( i = 0; i < 4; i++){
                if (pesquisa == matricula[i]){
                    printf("Matricula: %d\nNota: %d\n\n", matricula[i],notas[i]);
                    break;
                }
            }
        }
        else if(continua == 0){
            break;
        }
    }
}
