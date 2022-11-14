#include <stdio.h>
#include <math.h>

int main(){
    int m[10],m1[10],m2[10],i,calc,par[10],impar[10];
    
	for( i = 0; i < 10; i++){
        printf("Informe o numero %d: ",i);
        scanf("%d",&m[i]);
        calc = m[i] %2;
        if (calc ==0){
            m1[i]=m[i];
            par[i] = 1;
        }
		else if (calc > 0){
           m2[i]=m[i];
            impar[i]=1;
        }  
    }
    
	for( i = 0; i < 10; i++){
      		if (impar[i] ==1){
       printf("Numero impar eh: %d na posicao: %d\n", m2[i],i);
      }  
    }
   
    for( i = 0; i < 10; i++){
        if (par[i] ==1 ){
        printf("Numero par eh: %d na posicao: %d\n", m1[i],i);
    	}
    }
}
