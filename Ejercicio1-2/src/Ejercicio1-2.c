/*
 ============================================================================
 Name        : Ejercicio1-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 1-2: ingresar 3 números y mostrar cuál de los tres es el mayor.
Ejemplo: Si ingresamos 5, 9 y 3 el programa mostrará: “El mayor de los números es el
segundo: 9”
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

		int num;
		int i;
		int flag =0;
		int maximo;

		for ( i = 0; i< 3; i++){

			printf("Ingrese un numero");
			scanf("%d",&num);

			if (flag==0||num>maximo){

				maximo = num;
				flag = 1;
			}
		}
			printf("El numero maximo es %d", maximo);


	return EXIT_SUCCESS;
}
