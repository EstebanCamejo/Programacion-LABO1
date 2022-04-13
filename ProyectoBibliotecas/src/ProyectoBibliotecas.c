/*
 ============================================================================
 Name        : ProyectoBibliotecas.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn_getNumero.h"


int main(void) {
	setbuf(stdout, NULL);

	int edad;
	int peso;
	int respuesta;
	char letra;


	respuesta = utn_getNumeroCaracter(&letra, " Letra?\n", "Error la letra debe ser desde A a J \n",'A','J',2);

	if (respuesta == 0)
	{
		printf("La letra es: %c \n", letra);
	}
	else{
		printf("\n Error");
	}


	respuesta = utn_getNumero(&edad, " Edad?\n", "Error la edad debe ser desde 0 a 199 \n",0,199,2);

	if (respuesta == 0)
	{
		printf("La edad es: %d \n", edad);
	}
	else{
		printf("\n Error");
	}


	respuesta = utn_getNumero(&peso, " Peso?\n", "Error el peso debe ser desde 0 a 500 \n",0,500,3);
	if (respuesta == 0)
	{
		printf("El peso es: %d \n", peso);
	}
	else{
		printf("\n Error");
	}


	return EXIT_SUCCESS;
}
