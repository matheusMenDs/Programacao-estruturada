#include <stdio.h>

int main(){                                         //corrigir para ler ATÉ 100 idades
    int idade[10], index_velha[10];                //a pessoa deve informar quantas idades ela quer ler
    int i, mais_velha, cont_velha, tot_idade = 0; //está lendo apenas 10 idades
	cont_velha = 0;

    for(i = 0; i < 10; i++){
        printf("Digite a %d idade: ", i);
        scanf("%d", &idade[i]);

        tot_idade += idade[i];
  
        if(i == 0){
            mais_velha = idade[i];
        }

        else if (idade[i] >= mais_velha){
            mais_velha = idade[i]; 
        }

    }

    printf("Total : %d\n", tot_idade);
    printf("A media foi: %d\n", (tot_idade / 10));
    printf("A idade mais velha foi: %d e aparece no: ", mais_velha);
 
    for(i = 0; i < 10; i++){ 
        if(mais_velha == idade[i]){
            index_velha[cont_velha] = i;
            cont_velha++;
            printf("\n\t %d", i);            
        }
    }
}
