#include <stdio.h>
#include <math.h>

int main (){
    int matriz[10][10];
    int i;
    int j;
    
	for (i=0; i<10; i++){
        for (j=0; j<10; j++){
            if (i<j){
            	matriz[i][j] = 2*i + 7*j -2;  
            }
            else if (i==j){
            	matriz[i][j] = pow(3*i,2) - 1;
            }
            else if (i>j){
            	matriz[i][j] = pow(4*i,3) + pow(5*j,2) +1;
            } 
        }    
    }
    
	for (i=0; i<10; i++){
        for (j=0; j<10; j++){
        	printf("%d\t", matriz[i][j]);   
        }
        printf("\n");
    }
     
}
