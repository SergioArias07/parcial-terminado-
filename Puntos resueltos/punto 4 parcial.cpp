/*
PROGRAMA: determinar cuantas vocales tiene el nombre introducido
FECHA: 11 de Agosto del 2018
ELABORADO POR: Sergio Daniel Arias Rendon
*/ 
#include <stdio.h> 
#include <conio.h> 
#include <stdlib.h> 
//variables declaradas
char frase[100]; 
int a,b; 

main(){ 
	
	//dato a pedir al usuario
	printf("ingrese un nombre: "); 
	gets(frase);
	
	// ciclo for para determinar la cantidad de vocales
	for(a=0;a<100;a++){ 
		switch (frase[a]){ 
		case 'a': b=b+1; 
		break; 
		case 'e': b=b+1; 
		break; 
		case 'i': b=b+1; 
		break; 
		case 'o': b=b+1; 
		break; 
		case 'u': b=b+1; 
		break; 
		} } 
	//mensaje con el resultado a mostrar en pantalla 
	printf("la cantidad de vocales en el nombre es: %d\n",b); 
	
	getch(); 
	
	return 0;
}
