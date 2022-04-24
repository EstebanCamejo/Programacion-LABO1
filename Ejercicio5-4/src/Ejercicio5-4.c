/*
 ============================================================================
 Name        : Ejercicio5-4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 5-4: Pedir 10 números entre -100 y 100, guardarlos en un Array. Determinar:
a) Cantidad de negativos.
b) Sumatoria de los impares.
c) El mayor de los pares.
d) Listado de los números ingresados.
e) Listado de los números mayores a 15.
f) Listado de los números de las posiciones impares.*/

#include <stdio.h>
#include <stdlib.h>
#include "utn_getNumero.h"
#define TAM 10


int main(void) {
	setbuf(stdout,NULL);

	int pedirNumeros;
	int numero;
	int numeros [TAM];
	int contadorNegativos = 0;
	int acumImpares = 0;
	int mayorPar;
	int flag = 0;


	if (inicializarArray (numeros, TAM) == 0){

		for (int i = 0; i < TAM ; i++){

			pedirNumeros = utn_getNumero (&numero, "Por favor ingrese un numero entre -100 y 100","Error el numero ingresado es incorrecto",-100,100,2);
			if (pedirNumeros == 0){

					numeros [i] = numero;
			}

				if (numeros[i] < 0 ){

					contadorNegativos++; // a) Cantidad de negativos.
				}

				if (numeros[i] %2 != 0){

					acumImpares += numeros[i] ; // b) Sumatoria de los impares.
				}
				else{

					if (flag == 0 || numeros[i] > mayorPar){ // c) El mayor de los pares.

						mayorPar = numeros[i];

						flag = 1;
					}
				}

			} // Fin del IF 1*/

		} // Fin de For

		printf ("La cantidad de numeros negativos es %d \n", contadorNegativos);
		printf ("La sumatoria de impares es %d \n", acumImpares);
		printf ("El mayor de los pares es %d \n", mayorPar);


		printf ("\nLos numeros ingresados son : \n" ); // d) Listado de los números ingresados.

		for (int i = 0; i < TAM ; i++){

			printf ("%d \n", numeros [i]);
		}

		printf ("\nLos numeros mayores a 15 son : \n" ); //e) Listado de los números mayores a 15.

		for (int i = 0; i < TAM ; i++){

			if (numeros[i] > 15 ){

				printf ("%d \n", numeros [i]);
			}
		}
		printf ("\nLos numeros impares son : \n" ); // f) Listado de los números de las posiciones impares.

		for (int i = 0; i  < TAM ; i++){

			if (numeros[i] %2 != 0 ){

				printf ("%d \n", numeros [i]);
			}
		}


	return EXIT_SUCCESS;
}
