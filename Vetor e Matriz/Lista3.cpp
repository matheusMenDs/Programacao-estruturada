#include <stdio.h>
#include <math.h>

int main (){
    int num[10];
    int i;
    int a;
    int j;
    
	for (i=0; i<10; i++){
       printf("Informe o numero %d: ", i);
       scanf("%d", &num[i]);
       a=num[i];
       
	for (j=0; j<10; j++){
            if (a == num[j]){
                printf("Informe outro numero, o numero: %d ja existe: ", num[j]);
                scanf("%d", &num[j]);   
            }
        }
    }
}
