/*
 ============================================================================
 Name        : Ejercicio3-5b.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================

 Ejercicio 3-5: Realizar un programa en donde se puedan utilizar los prototipos de la
función Restar en sus 4 combinaciones.
;
int Restar2(void);
;*/

#include <stdio.h>
#include <stdlib.h>

int Restar2(void);

int main(void) {
	setbuf(stdout,NULL);

	int total;

	total = Restar2 ();

	printf("El totla de la resta es : %d\n", total);

	return EXIT_SUCCESS;
}
	int Restar2(void){

	int resultado;
	int a;
	int b;
	printf ("ingrese un numero a restar");
	scanf("%d",&a);
	printf ("ingrese un numero a restar");
	scanf("%d",&b);
	resultado = a-b;

	return resultado;
	}
