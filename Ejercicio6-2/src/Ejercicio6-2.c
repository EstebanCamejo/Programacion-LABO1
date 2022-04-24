/*
 ============================================================================
 Name        : Ejercicio6-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
Ejercicio 6-2: Realizar un programa que permita el ingreso de 10 números enteros
(positivos y negativos). Necesito generar un listado de los números positivos de
manera creciente y negativos de manera decreciente. (Como máximo 5 estructuras
repetitivas)
[Listado 1: 4, 5, 6, 10, 18, 29]
[Listado 2 : -1,-5,-9,-12]*/

#include <stdio.h>
#include <stdlib.h>
#include "utn_getNumero.h"
#define TAM 10

int main(void) {
	setbuf(stdout,NULL);
	int numeros [TAM];
	int pedirNumeros;
	int numero;

	//if (inicializarArray (numeros, TAM) == 0){

		for (int i = 0; i < TAM ; i++){

				pedirNumeros = utn_getNumero (&numero, "Por favor ingrese un numero positivo o negativo entre -100 y 100","Error el numero ingresado es incorrecto",-100,100,2);
				if (pedirNumeros == 0){

						numeros [i] = numero;
				}// Fin del IF 1*/

		} // Fin de For



		ordenamientoArrayDecendente (numeros, TAM); // a) listado negativos decreciente
		printf ("El listado decreciente de los numeros negativos es \n");

		for (int i = 0; i < TAM ; i++){

			if (numeros[i] < 0 ){

				printf ("%d \n", numeros [i]);
				}
		}
		ordenamientoArrayAscendente (numeros, TAM); // listado positivos creciente
		printf ("El listado creciente de los numeros positivos es \n ");

		for (int i = 0; i < TAM ; i++){
			if (numeros[i] > 0 ){

				printf ("%d \n", numeros [i]);
			}
		}





	return EXIT_SUCCESS;
}
