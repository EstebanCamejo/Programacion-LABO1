/*
 ============================================================================
 Name        : ProyectoOK.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 CalcularMaximo(int* maximo, int* minimo)

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
// #include "calcular.h"

int CalcularMaximo(int* maximo, int* minimo);

int main(void) {
	setbuf(stdout, NULL);
	int maximo;
	int minimo;

	CalcularMaximo(&maximo, &minimo); // pasaje por referencia

	printf("El maximo es %d", maximo);
	printf("El maximo es %d", minimo);

	return EXIT_SUCCESS;
}
 int CalcularMaximo(int* maximo, int* minimo){
	int retorno = -1;
	int num1;
	int num2;

	printf("ingrese un numero");
	scanf("%d",&num1);
	printf("Ingrese otro numero");
	scanf(" %d", &num2);

	if(maximo != NULL && minimo!= NULL)
	{

		if(num1>num2){
			*maximo = num1;
			*minimo = num2;
		}
		else {
			*maximo=num2;
			*minimo=num1;
		}
	}

		return retorno;


}
