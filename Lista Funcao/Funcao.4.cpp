/*4. Escreva uma fun��o que receba por par�metro a altura e o raio de um cilindro circular e 
retorne o volume desse cilindro. O volume de um cilindro circular � calculado por meio da 
seguinte f�rmula:  V = PI * raio� * altura     em que PI = 3.1414592 */
#include <stdio.h>
#include <math.h>
#define PI 3.1414592

int volume(float altura,float raio){
	float volume;
 	
	volume = PI * pow(raio,2)*altura;
	printf("Volume e %.2f", volume);

}


int main (){
    float altura;
    float raio;
    
	printf("Informe a altura: ");
    scanf("%f",&altura);
    
    printf("Informe o raio: ");
    scanf("%f", &raio);
    volume(altura,raio);
}
