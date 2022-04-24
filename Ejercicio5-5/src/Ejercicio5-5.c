/*
 ============================================================================
 Name        : Ejercicio5-5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
Ejercicio 5-5: Pedir 10 números enteros distintos de cero entre -50 y 75. La carga
deberá ser aleatoria (todos los elementos se inicializan en cero por default).
Determinar el promedio de los positivos. Desde el mayor de los negativos los
números negativos hasta llegar a cero.*/

#include <stdio.h>
#include <stdlib.h>
#include "utn_getNumero.h"
#define TAM 10


int main(void) {
	setbuf(stdout,NULL);

	int numeros [TAM];
	int pedirNumeros;
	int numero;
	int pedirPosicion;
	int posicion;
	int j;



	if(inicializarArray (numeros, TAM) == 0){

		for (int i = 0; i<TAM ; i++){
		pedirPosicion = utn_getNumero(&posicion,"Por favor elija un numero entre 0 y 9 para realizar la carga","Error el numero ingresado es incorrecto",0,9,2);

		pedirNumeros = utn_getNumero (&numero, "Por favor ingrese un numero entero diferente de 0 entre -50 y 75","Error el numero ingresado es incorrecto",-50,75,2);

			if (pedirPosicion == 0 && pedirNumeros == 0 && numero != 0){

					 j = posicion;
					numeros[j] = numero;
			}

		} // FIN del FOR
	} // FIN IF inicializacion

	return EXIT_SUCCESS;
}
