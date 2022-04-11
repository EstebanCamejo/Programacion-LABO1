/*
 ============================================================================
 Name        : Ejercicio2-4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 2-4:
Ingresar 8 números enteros, distintos de cero. Mostrar:
a. El menor número ingresado.
b. De los pares el mayor número ingresado.
c. Producto de los negativos.
d. En qué lugar fue ingresado el mayor numero*/

#include <stdio.h>
#include <stdlib.h>


int main(void) {
	setbuf(stdout,NULL);
	int num;
	int i;
	int menorNum;
	int flag = 0;
	int mayorPar =0;
	int acumProdN =1;
	int mayorNum =0;
	int posisionMayorNum;


	for(i=0; i<8; i++){

		printf("Ingrese un numero diferente de cero ");
		scanf("%d", &num);

		if (num!=0){

			if (flag ==0 || num<menorNum)
				{
					menorNum = num;

					flag =1;
				}

				if (num%2 ==0 && mayorPar<num){

					mayorPar = num;

					}

				if (num<0){

					acumProdN*=num;
				}

				if (num>mayorNum){

					mayorNum =num;
					posisionMayorNum=i+1;

				}
			}




	}

	printf("El menor numero ingresado es %d\n ", menorNum);
	printf("El mayor numero par ingresado es %d\n ",mayorPar);
	printf("El producto de los numeros negativos es %d\n ",acumProdN);
	printf("La posision del mayor numero es %d\n ",posisionMayorNum);

	return EXIT_SUCCESS;
}
