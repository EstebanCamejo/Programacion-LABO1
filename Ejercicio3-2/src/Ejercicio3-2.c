/*
 ============================================================================
 Name        : Ejercicio3-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 3-2: Crear una función que pida el ingreso de un flotante y lo retorne.*/

#include <stdio.h>
#include <stdlib.h>

float imprimirNumFlotante ();

int main(void) {
	setbuf(stdout,NULL);

	float num;

	num = imprimirNumFlotante();

	printf("El numero flotante es %f",num);

	return EXIT_SUCCESS;

}
float imprimirNumFlotante ()
{
	float numero;

	printf("Ingrese el numero ");
	scanf("%f", &numero);
	return numero;
}
