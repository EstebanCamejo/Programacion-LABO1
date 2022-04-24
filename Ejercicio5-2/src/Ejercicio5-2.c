/*
 ============================================================================
 Name        : Ejercicio5-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
Ejercicio 5-2: Hacer una función que calcule el promedio de los valores del Array que
recibe y me devuelva el promedio.
*/

#include <stdio.h>
#include <stdlib.h>
#include "utn_getNumero.h"
#define TAM 5

int main(void) {
	setbuf(stdout,NULL);
	float totalpromedio;
	int num [TAM] = {2, 5, 8, 7, 6};
	int retornoFx;

	retornoFx = promedioArray (num, TAM, &totalpromedio);

	if (retornoFx == 0)
	{
		printf ("El promedio del array es  %.2f", totalpromedio);
	}
	else {
		printf ("ERROR");
	}
	return EXIT_SUCCESS;
}
