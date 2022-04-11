/*
 ============================================================================
 Name        : Ejercicio1-3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*Ejercicio 1-3: ingresar 3 números y mostrar el número del medio, sólo si existe. En
caso de que no exista también informarlo.
Ejemplo:
1 5 3 el 3 es del medio
5 1 5 no hay número del medio
3 5 1 el 3 es del medio
3 1 5 el 3 es del medio
5 3 1 el 3 es del medio*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	int i;
	int bufferInt;
	int flag = 0;
	int maximo;
	int minimo;
	int medio;
	int resultado;


	for (i=0; i<3 ; i++)
	{

		printf("ingrese numero");
		scanf("%d",&bufferInt);

		if (flag == 0){

			maximo = bufferInt ;
			minimo = bufferInt;

			flag = 1;
		}
		else{

			if (bufferInt>=maximo){

				maximo = bufferInt;
			}
			else {
				if (bufferInt<=minimo){

					minimo = bufferInt;
				}
				else{
					medio = bufferInt;
				}
			}

		}
	}

	if(medio!=0){

		resultado = medio;
		printf("El numero del medio es : %d", resultado);

	}
	else{
		printf("No hay numero del medio");
	}

	return EXIT_SUCCESS;
}
// NO ME FUNCIONA EL RESULTADO
