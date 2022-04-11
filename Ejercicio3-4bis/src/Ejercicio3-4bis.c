/*
 ============================================================================
 Name        : Ejercicio3-4bis.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 3-4: Especializar la función del punto 3.1 y 3.2 para que valide el número en
un rango determinado.*/

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

	do{
		printf("Ingrese el numero con decimales del 1 al 9 ");
		scanf("%f", &numero);
		}while (numero<0 || numero>10);

	return numero;
}
