/*
 ============================================================================
 Name        : Ejercicio3-3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 3-3: Crear una función que permita determinar si un número es par o no. La
función retorna 1 en caso afirmativo y 0 en caso contrario. Probar en el main.*/

#include <stdio.h>
#include <stdlib.h>

int funcionPar(int numpar);

int main(void) {
	setbuf(stdout,NULL);

	int num;
	int rtafx;

		printf("Ingrese el numero ");
		scanf("%d", &num);

		rtafx = funcionPar(num);

		if (rtafx == 1){
			printf("El numero es par");
		}
		else {
			printf("El numero es impar");
		}

	return EXIT_SUCCESS;
}
int funcionPar(int numpar)
{
	int rta;

	if (numpar%2 ==0){
		rta = 1;
	}
	else {
		rta = 0;
	}
	 return rta;
}
