/*
 ============================================================================
 Name        : Ejercicio3-6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 3-6: Realizar un programa que: asigne a la variable numero1 un valor
solicitado al usuario, valide el mismo entre 10 y 100, realice un descuento del 5% a
dicho valor a través de una función llamada realizarDescuento(). Mostrar el resultado
por pantalla.*/

#include <stdio.h>
#include <stdlib.h>

float realizarDescuento();

int main(void) {
	setbuf(stdout,NULL);

	float resultado;

	resultado = realizarDescuento();

	printf("El total con descuento es de %f",resultado);

	return EXIT_SUCCESS;
}
float realizarDescuento(){

	int num1;
	float descuento;

	printf ("ingrese un numero entre 10 y 100");
	scanf("%d",&num1);
	while(num1<10 || num1>100){
		printf ("Error. ingrese un numero entre 10 y 100");
		scanf("%d",&num1);
		}
	descuento = num1*95/100;
	return descuento;
}
