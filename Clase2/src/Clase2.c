/*
 ============================================================================
 Name        : Clase2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

	//Perdir sexo edad y mostrarlo
//%c ( caracteres); %d( decimales)

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	char sexo;
	int edad;

	printf("Ingrese sexo f o m");
	fflush(stdin);
	scanf("%c",&sexo);

	printf("\n Ingrese la edad");
	scanf("%d", &edad);


	printf("\nEl sexo ingresado es %c y la edad ingresada es %d", sexo, edad);

	return EXIT_SUCCESS;
}
