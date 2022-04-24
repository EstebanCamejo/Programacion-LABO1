/*
 ============================================================================
 Name        : Ejercicio6-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
Ejercicio 6-1: Disponemos de dos variables numéricas (a y b). Realizar un algoritmo
que permita el intercambio de valores de dichas variables.*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	int numA = 100;
	int numB = 200;

	int aux;

	if(numA != NULL && numB != NULL) // hacerlo con una funcion
	 {
			  aux = numA;
			  numA = numB;
			  numB = aux;
	}

	 printf ("el numero 1 es %d. El numero 2 es %d", numA,numB);


	return EXIT_SUCCESS;
}
