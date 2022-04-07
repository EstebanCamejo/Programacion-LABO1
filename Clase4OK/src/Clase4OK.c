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

    int num1;
    int num2;
    int suma;
    int resta;

	printf("Ingrese numero");
	scanf("%d",&num1);
	printf("Ingrese numero");
	scanf("%d",&num2);

	suma = num1+ num2;
	resta = num1 - num2;


	printf("La suma es %d", suma);
	printf("La resta es %d", resta);


	return EXIT_SUCCESS;
}
