/*
 ============================================================================
 Name        : Ejercicio2-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 2-1: Ingresar 7 números negativos distintos de 0 calcular y mostrar el
promedio de los números. Probar la aplicación con distintos valores.
Ejemplo 1: (-7)( - 5)( - 12) (- 1)( - 2)
Ejemplo 2: (-9)( - 15)( - 12) (- 1)( - 21)*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	int i;
	int num;
	int acum = 0;
	int promedio;

	for (i=0; i<7 ; i++)
		{
		printf("ingrese un numero negativo");
		scanf("%d",&num);
		acum += num;
		}

	promedio = acum/7;

	printf("el promedio es %d", promedio);

	return EXIT_SUCCESS;
}
