/*
 ============================================================================
 Name        : Ejercicio2-3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
Ejercicio 2-3: Usando el concepto de operadores l�gicos booleanos en el condicional.
Solicitar un n�mero al usuario e informar si el n�mero es par o impar. */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	int num;

	printf("Ingrese el numero ");
	scanf("%d", &num);

	if (num%2 ==0){
		printf("El numero ingresado es par ");
	}
	else
	{
		printf("El numero ingresado es impar ");
	}

	return EXIT_SUCCESS;
}
