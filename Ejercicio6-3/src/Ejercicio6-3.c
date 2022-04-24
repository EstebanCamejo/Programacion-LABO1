/*
 ============================================================================
 Name        : Ejercicio6-3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
Ejercicio 6-3: Realizar un programa que permita el ingreso de datos de 15 empleados
legajo (coincidente con el índice), edad, salario, sexo (1-Femenino, 2-Masculino, 3-No
binario). Realizar carga secuencial. Calcular el sueldo promedio. Listar a los
empleados no binarios. */

#include <stdio.h>
#include <stdlib.h>
#include "utn_getNumero.h"
#define TAM 15

int main(void) {
	setbuf(stdout,NULL);
	int pedirEdad;
	int edad [TAM];
	int pedirSalario;
	int salario [TAM];
	int pedirSexo;
	int sexo [TAM];
	int acumSalario = 0;
	float salarioPromedio;
	int contadorNb = 0;
	int promedioOK;

	if(inicializarArray (edad, TAM) == 0 && inicializarArray (salario, TAM) == 0 && inicializarArray (sexo, TAM) == 0){

			for (int i = 0; i<TAM ; i++){

				pedirEdad = utn_getNumero (edad, "Por favor ingrese la edad","Error el numero ingresado es incorrecto",18,65,2);
				pedirSalario = utn_getNumero (salario,"Por favor ingrese el salario","Error el dato ingresado es incorrecto",40,100,2);
				pedirSexo = utn_getNumero (sexo,"Por favor ingrese el sexo, solo un numero: 1(femenino), 2(masculino) o 3(no binario)","Error el numero ingresado es incorrecto",1,3,2);
				if (pedirEdad == 0 && pedirSalario == 0 && pedirSexo == 0){

						acumSalario = acumSalario + salario [i];

						if (sexo[i] == 3){
							contadorNb++;
						}
				}
			}

			promedioOK = calculoDivision(&salarioPromedio,acumSalario,TAM);

				if (promedioOK == 0){

					printf("El salario promedio es de %.2f\n ",salarioPromedio);
				}

			printf("La cantidad de empleadxs NB es: %d\n ",contadorNb);

			for (int i = 0; i<TAM ; i++){

				if (sexo[i] == 3){
					printf("La posicion: %d  \n tiene una edad de: %d\n ", i,edad[i]);
					printf(", y su salario de la es: %d\n ", salario[i]);
				}

			}
	}// Fin del if inicial


	return EXIT_SUCCESS;
}
// hacer un for pidiendo cada dato y guardarlo en un array diferente
// si el sexo es 3 mostrar la cant
//numero de legajo osea i
//la edad i
//el salario i
//hacer un acum de los salarios y mostrar el promedio
