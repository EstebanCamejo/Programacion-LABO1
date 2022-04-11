/*
 ============================================================================
 Name        : Prueba-Eliminar.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*
#include <stdio.h>
#include <stdlib.h>

void muestra (int x,int y);

int main(void) {
	setbuf(stdout,NULL);

	int x,y;
	printf("ingrese un numero entero");
	scanf("%d",&x);
	printf("ingrese un numero entero");
	scanf("%d",&y);

	muestra(x,y);

	printf("\n los valores dentro del main ");
	printf("\n x vale %d \n y vale %d", x,y);


	return EXIT_SUCCESS;
}
void muestra (int x,int y){
	x=y;
	printf("\n valores dentro de la funcion");
	printf("\n x vale %d \n y vale %d", x,y);
}
*/
#include <stdio.h>
#include <stdlib.h>
int numero(void);
int main()
{
	int valorDevuelto;

	valorDevuelto=numero();

	printf("Valor= %d ", valorDevuelto);
	return EXIT_SUCCESS;
}
int numero(void){

int valor;
valor = rand() % 11;
return valor;
}


