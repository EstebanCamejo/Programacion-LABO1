/*
 ============================================================================
 Name        : Ejercicio1-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 *///Esteban Camejo
/*Ejercicio 1-1: Ingresar dos números enteros entre -50 y 100, sumarlos y mostrar el
resultado. Ejemplo: Si ingresamos 3 y 2 el programa mostrará: “La suma entre 3 y 2
da como resultado 5”*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	int num1;
	int num2;
	int suma;

	printf("Ingrese un numero etre 50 y 100");
	scanf("%d",&num1);
	printf("Ingrese otro numero etre 50 y 100");
	scanf("%d",&num2);

	suma = num1+num2;


	printf("La suma de los dos numeros es %d", suma);



	return EXIT_SUCCESS;
}
