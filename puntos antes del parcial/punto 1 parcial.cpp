/*
PROGRAMA: pedir dos datos y determinar en que nivel esta de suficiencia
FECHA: 11 de Agosto del 2018
ELABORADO POR: Sergio Daniel Arias Rendon
*/
#include <stdio.h>
#include <stdlib.h>
//funcion pricipal
int main() {
	//variables declaradas
	float porcentaje=0;
	float preguntas, acertadas;
	//datos a pedir al usuario
	printf ("Ingrese el numero de preguntas realizadas: ");
	scanf("%f", &preguntas);
	printf ("Ingrese el numero de preguntas Acertadas: ");
	scanf("%f", &acertadas);
	
	porcentaje=((acertadas/preguntas)*100);
	printf("Su porcentaje es %2.f\n", porcentaje);
	//sentencia if para determinar su nivel de suficiencia 
	if(porcentaje>=85){
		printf("nivel maximo");
	}
	if(porcentaje>=70 and porcentaje<70){
		printf("nivel medio");
	}
	if(porcentaje>=40 and porcentaje<70){
		printf("nivel regular");
	}
	if(porcentaje<40){
		printf("fuera de nivel");
	}
	
	return 0;
}
