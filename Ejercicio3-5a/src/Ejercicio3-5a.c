/*
 ============================================================================
 Name        : Ejercicio3-5a.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================

 Ejercicio 3-5:

 Realizar un programa en donde se puedan utilizar los prototipos de la
función Restar en sus 4 combinaciones.

int Restar1(int, int);

*/

#include <stdio.h>
#include <stdlib.h>


int restar1 (int A,int B);

int main(void) {
	setbuf(stdout,NULL);

	int a;
	int b;
	int resultado;

	printf ("ingrese un numero a restar");
	scanf("%d",&a);
	printf ("ingrese un numero a restar");
	scanf("%d",&b);

	resultado = restar1(a,b);
	//return EXIT_SUCCESS;
	printf ("El total de la resta es %d", resultado);

}

int restar1 (int A,int B){
	int total;
	total = A - B ;
	return total;
}
