/*
 ============================================================================
 Name        : Ejercicio5-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
Ejercicio 5-1: Pedir 5 números enteros, guardarlos en un Array. Calcular la sumatorio
de los mismos y mostrar los impares ingresados. */


#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main(void) {
	setbuf(stdout,NULL);

	int num [5];
	int i;
	int acum = 0;

	for (i=0;i<TAM;i++){

		printf("\ningrese un numero entero\n");

		scanf ("%d",&num[i]); // scanf ("%d",num[i]);

		acum+=num[i];

		}

	printf ("\nLa sumatoria de los numero singresados es %d\n", acum);

	for (i=0;i<TAM;i++){

			if (num[i] %2 ==0){
						printf ("\n Los numeros impares ingresados son: %d\n", num[i] );
					}
		}

	return EXIT_SUCCESS;
}
