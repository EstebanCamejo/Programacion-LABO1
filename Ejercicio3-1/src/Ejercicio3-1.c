/*
 ============================================================================
 Name        : Ejercicio3-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 3-1: Crear una funci�n que muestre por pantalla el n�mero entero que
recibe como par�metro.*/

#include <stdio.h>
#include <stdlib.h>

void  imprimirNumeroEntero (int numero);

int main(void) {
	setbuf(stdout,NULL);

	int num;

		printf("Ingrese el numero ");
		scanf("%d", &num);

		imprimirNumeroEntero(num);

		return EXIT_SUCCESS;

	}

void  imprimirNumeroEntero (int numero)
{
	printf("El numero entero es %d", numero);

}

