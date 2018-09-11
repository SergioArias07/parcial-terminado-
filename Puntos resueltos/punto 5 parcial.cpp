/*
PROGRAMA: sacar la rai cuadrada de un numero ingresado 
FECHA: 11 de Agosto del 2018
ELABORADO POR: Sergio Daniel Arias Rendon
*/

#include <stdio.h>
#include <stdlib.h>

//prototipo de la funcion
void cuadrado();
int main() {
	//llamado a la función
	cuadrado();
}
//funcion pricipal
void cuadrado(){
	//varibles declaradas
float n, cuadra;
    //datos a pedir al usuario sacando un mensaje del resultado
    printf ("ingrese un numero para calcular su cuadrado");
    scanf("%f",&n);
    cuadra=n*n;
	printf("el cuadrado se su numero es: %f", cuadra);
}
