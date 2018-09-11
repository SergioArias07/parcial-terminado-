/*
PROGRAMA: pedir numeros y  determinar cuantos son impares y cuantos pares
FECHA: 11 de Agosto del 2018
ELABORADO POR: Sergio Daniel Arias Rendon
*/
#include <stdio.h>
#include <stdlib.h>
//Funcion principal
int main() {
	//variables declaradas
	int n, acu=0, acu2=0;
	//ciclo Do while
	do{
		
		printf("ingrese el numero: ");
		scanf("%d",&n);
		//sentencia if para haya los pares e impares
		if(n%2==0)
		{
			acu=acu+1;
		}
		if(n%2==1)
		{
			acu2=acu2+1;
		}
		
		
	}while(n>=1);
	//Resultados a mostrar por los numeros ingresados por el usuario
	printf("el total de los impares es de: %d\n", acu2);
	printf("el total de los pares es de: %d", acu-1);
}

