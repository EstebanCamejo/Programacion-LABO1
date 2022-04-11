/*
 ============================================================================
 Name        : Ejercicio2-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 2-2: Ingresar números enteros, hasta que el usuario pida. Mostrar:
a) El promedio de los positivos y su mínimo.
b) El promedio de los negativos y su máximo.*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	char seguir = 's';

	int num;
	int flagP = 0;
	int flagN = 0;

	int acumP = 0;
	int contP = 0;
	float promedioP;

	int maxN;
	int minP;

	int acumN = 0;
	int contN = 0;
	float promedioN;




	do{
		printf("Ingresar numeros");
		scanf("%d",&num);


		if (flagP == 0 && num > 0){

				num =minP;
				flagP = 1;
		}
		else if (num<minP && num >0){

			minP = num;
		}
		if (flagN == 0 && num < 0){

				maxN = num ;
				flagN = 1;
				}

		else if (num>maxN && num < 0){

			num = maxN;
		}

		if(num>0){
				acumP+=num;
				contP++;
			}
			else{
				acumN+=num;
				contN++;
			}


		printf("desea seguir ingresadndo numeros? s/n");
		scanf("%c",&seguir);
		fflush(stdin);


	}while(seguir == 's');

	promedioP = acumP/contP;
	promedioN = acumN/contN;

	printf("El promedio de los positivos es:%f\n",promedioP);
	printf("El promedio de los negativos es:%f\n",promedioN);
	printf("El maximo de los negativos es:%d\n",maxN);
	printf("El minimo de los positivos es:%d\n",minP);

	return EXIT_SUCCESS;
}
