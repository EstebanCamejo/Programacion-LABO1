/*
 ============================================================================
 Name        : Ejercicio3-5d.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 3-5: Realizar un programa en donde se puedan utilizar los prototipos de la
función Restar en sus 4 combinaciones.

void Restar4(void);*/

#include <stdio.h>
#include <stdlib.h>

void Restar4(void);

int main(void) {
	setbuf(stdout,NULL);

	Restar4 ();

	return EXIT_SUCCESS;
}
void Restar4(void){

	int a;
	int b;
	int resultado;
	printf ("ingrese un numero a restar");
	scanf("%d",&a);
	printf ("ingrese un numero a restar");
	scanf("%d",&b);
	resultado = a -b;
	printf("El total de la resta es %d",resultado);
}
