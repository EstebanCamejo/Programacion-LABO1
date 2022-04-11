/*
 ============================================================================
 Name        : Ejercicio3-5c.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================

 Ejercicio 3-5: Realizar un programa en donde se puedan utilizar los prototipos de la
función Restar en sus 4 combinaciones.

void Restar3(int, int);
;*/

#include <stdio.h>
#include <stdlib.h>

void Resta3(int A, int B);

int main(void) {
	setbuf(stdout,NULL);

	int a;
	int b;

	printf ("ingrese un numero a restar");
	scanf("%d",&a);
	printf ("ingrese un numero a restar");
	scanf("%d",&b);

	Resta3 (a,b);

	return EXIT_SUCCESS;
}
void Resta3(int A, int B){

	int resultado;
	resultado = A - B;
	printf("El total de la resta es %d",resultado);
}
