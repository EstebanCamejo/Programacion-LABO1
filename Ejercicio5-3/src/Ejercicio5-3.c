/*
 ============================================================================
 Name        : Ejercicio5-3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
Ejercicio 5-3: Realizar una función que reciba como parámetros un array de enteros y
un entero por referencia. La función calculara el máximo valor de ese array y utilizara
el valor por referencia para retornar ese valor. */

#include <stdio.h>
#include <stdlib.h>
#include "utn_getNumero.h"
#define TAM 5


int main(void) {
	setbuf(stdout,NULL);

	int enteros [TAM];
	int maximo;

	for (int i = 0; i<TAM; i++){
		printf("Ingrese numeros enteros");
		scanf("%d", &enteros[i]);
	}
	maximoArray (enteros,TAM, &maximo);
	printf("el maximo del array es: %d", maximo);

	return EXIT_SUCCESS;
	}
