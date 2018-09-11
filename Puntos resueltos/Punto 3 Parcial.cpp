/*
PROGRAMA: Punto 3 (pedir al usuario 2 nombres y 
		  determinar cual tiene mas caracteres
FECHA: 11 de Agosto del 2018
ELABORADO POR: Sergio Daniel Arias Rendon
*/

#include <stdio.h>
#include <string.h>
//Funcion pricipal
int main()
{
	//variables declaradas 
	char nombre1[100]; 
	char nombre2[100];
	int r1, r2;
	//mensaje de inicio para que el usuario ingrese los datos
	printf("Ingrese el Primer nombre: ");
	gets(nombre1);
	printf("Ingrese el Segundo nombre: ");
	gets(nombre2);
	//Funcion strlen=determinar cual tiene mayor caracteres
	r1= strlen(nombre1);
	r2= strlen(nombre2);
	//ciclo if(si)
	if(r1>r2){
		printf("%s\n", nombre1);
		printf("%s", nombre2);
	}else{
	   printf("%s\n", nombre2);
	   printf("%s", nombre1);
}
	
	return 0;
}
