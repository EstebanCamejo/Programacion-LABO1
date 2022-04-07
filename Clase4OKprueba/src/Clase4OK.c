/*
 ============================================================================
 Name        : Clase4OK.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    setbuf(stdout,NULL);

    int numero;

	printf("Ingrese numero");
	scanf("%d",&numero);

	printf("El numero ingresado es %d", numero);


	return EXIT_SUCCESS;
}
