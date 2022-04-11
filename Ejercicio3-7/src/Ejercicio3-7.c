/*
 ============================================================================
 Name        : Ejercicio3-7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 3-7: Realizar un programa que: asigne a las variables numero1 y numero2
los valores solicitados al usuario, valide los mismos entre 10 y 100, asigne a la
variable operacion el valor solicitado al usuario, valide el mismo 's'-sumar, 'r'-restar,
realice la operación de dichos valores a través de una función. Mostrar el resultado
por pantalla.*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	int num1;
	int num2;

	printf ("ingrese un numero entre 10 y 100");
		scanf("%d",&num1);
		while(num1<10 || num1>100){
			printf ("Error. ingrese un numero entre 10 y 100");
			scanf("%d",&num1);
			}

	printf ("ingrese un numero entre 10 y 100");
		scanf("%d",&num2);
		while(num2<10 || num2>100){
			printf ("Error. ingrese un numero entre 10 y 100");
			scanf("%d",&num2);
			}



	return EXIT_SUCCESS;
}
