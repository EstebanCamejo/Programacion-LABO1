/*
 ============================================================================
 Name        : Ejercicio3-4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 3-4: Especializar la función del punto 3.1 y 3.2 para que valide el número en
un rango determinado.*/

#include <stdio.h>
#include <stdlib.h>

void  imprimirNumeroEntero (int numero);
void  numeroInvalido (int numero);

int main(void) {
	setbuf(stdout,NULL);

	int num;

	do{	printf("Ingrese el numero \n ");
		scanf("%d", &num);

			if (num<0){
				numeroInvalido(num);
			}
		}while(num<0);

		imprimirNumeroEntero(num);


		return EXIT_SUCCESS;
	}

void  imprimirNumeroEntero (int numero)
{
	printf("El numero entero es %d \n", numero);

}
void  numeroInvalido (int numero)
{
	printf("Error. El numero ingresado debe ser mayor a 0 \n Ingrese otro numero\n");
}
