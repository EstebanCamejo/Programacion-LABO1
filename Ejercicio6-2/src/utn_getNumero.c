/*
 * utn_getNumero.c
 *
 *  Created on: 12 abr 2022
 *      Author: Usuario
 */


#include <stdio.h>
#include <stdlib.h>

int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos)
{
	int bufferInt;
	int retorno = -1;

	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0) //validacion de parametros
	{
		do{
			printf("%s", mensaje); // cualquier tipo de string en el msj
			scanf ("%d", &bufferInt);// guardamos la respuesta en el buffer
			if (bufferInt >= minimo && bufferInt <= maximo)
			{
				*pResultado = bufferInt;
				retorno = 0;
				break;
			}
			else
			{
				printf("%s", mensajeError);
				reintentos --;
			}
		}while(reintentos >= 0 );

	}

	return retorno;
}

int utn_getNumeroFloat(float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos)
{
	int retorno = -1;
	float bufferFloat;
	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0) //validacion de parametros
	{
		do{
			printf("%s", mensaje);// cualquier tipo de string en el msj
			scanf ("%f", &bufferFloat);// guardamos la respuesta en el buffer
			if (bufferFloat >= minimo && bufferFloat <= maximo)
			{
				*pResultado = bufferFloat;
				retorno = 0;
				break;
			}
			else
			{
				printf("%s", mensajeError);
				reintentos --;
			}
		}while(reintentos >= 0 );

	}

	return retorno;
}

int utn_getNumeroCaracter(char* pResultado, char* mensaje, char* mensajeError, char minimo, char maximo, int reintentos)
{
	int retorno = -1;
	char bufferChar;
	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0) //validacion de parametros
	{
		do{
			printf("%s", mensaje);// cualquier tipo de string en el msj
			fflush(stdin);
			scanf ("%c", &bufferChar);// guardamos la respuesta en el buffer
			if (bufferChar >= minimo && bufferChar <= maximo)
			{
				*pResultado = bufferChar;
				retorno = 0;
				break;
			}
				else
				{
					printf("%s", mensajeError);
					reintentos --;
				}

			}while(reintentos >= 0 );

		}

	return retorno;
}

int calculoDescuento(float *resultadoDescuento, float precio, float descuento)
{
	int retorno = -1;

	if(resultadoDescuento != NULL && precio >0 && descuento >0){

		*resultadoDescuento = precio-(precio*descuento/100);

		retorno = 0;
	}

	return retorno;
}

int calculoInteres(float* resultadoInteres, float precio, float interes)
{

	int retorno = -1;

	if (resultadoInteres != NULL && precio>0 && interes> 0 ){

		*resultadoInteres = precio + (precio*interes/100);

		retorno = 0;
	}

	return retorno;
}

int calculoBitcoin(float* resultadoBitcoin, float precio, float bitcoin)

{
	int retorno = -1;

	if (resultadoBitcoin != NULL && precio>0 && bitcoin> 0 ){

		*resultadoBitcoin = precio / bitcoin;

		retorno = 0;
	}

	return retorno;
}

int calculoDivision(float* resultadoDivision,float operador1, float operador2){

	int retorno = -1;
	if (resultadoDivision != NULL && operador1 >0 && operador2 != 0){

		*resultadoDivision = (float) operador1 / operador2;

		retorno = 0;
	}
	return retorno;
}

int calculoDiferencia(float* resuladoDiferencia, float operador1, float operador2){
	int retorno = -1;
	float bufferFloatDiff;
	if(resuladoDiferencia != NULL && operador1 >0 && operador2 >0 ){

			if (operador1 > operador2){

				bufferFloatDiff = operador1 - operador2;
			}
			 else {

				 bufferFloatDiff = operador2 - operador1;
			 }
		*resuladoDiferencia = bufferFloatDiff;

	retorno = 0;
	}
	return retorno;
}


int inicializarArray (int array[], int tamanio)	//inicializacion EN -1
{
  int retorno = -1;
  int i;

  if (array != NULL && tamanio > 0)
    {
      for (i = 0; i <tamanio ; i++)
		{
		  array[i] = -1;
		}
      retorno = 0;
    }
  return retorno;
}

int maximoArray (int array[], int tamanio ,int* maximo) // FALTA REVISAR
{
	int	retorno = -1;
	int	flag = 0;

 if (array != NULL && tamanio>0 && maximo != NULL){

	 for  (int i = 0; i < tamanio; i++ ){

		 if (flag == 0 || array [i] > *maximo){// ver el puntero en esta linea

		 *maximo = array [i]; // es igual a la linea 218

		 flag =1;

		 }
	 }
	 retorno =0;
 }
 return retorno;
}

int minimoArray (int array[], int tamanio, int* minimo) //FALTA REVISAR
{
	int	retorno = -1;
	int	flag = 0;

 if (array != NULL && tamanio>0 && minimo != NULL){

	 for  (int i = 0; i < tamanio; i++ ){

		 if (flag == 0 || array [i] < *minimo){ // ver el puntero en esta linea

		 *minimo = array [i]; // es igual a la linea 218

		 flag =1;

		 }
	 }
	 retorno =0;
 }
 return retorno;
}
//////////////////
int ordenamientoArrayAscendente (int array[], int tamanio)
{
	int retorno = -1;
	int aux;
	int i;
	int j;

	 if (array != NULL && tamanio >= 0){

		 for (i = 0; i < tamanio - 1; i++)
		   {
			 for (j = i + 1; j < tamanio; j++)
				{
				  if (array[i] > array[j])
					{
					  aux = array[i];
					  array[i] = array[j];
					  array[j] = aux;
					}
				}
		   }

		 retorno = 0;
	   }
	return retorno;
}

int ordenamientoArrayDecendente (int array[], int tamanio)
{
	int retorno = -1;
	int aux;
	int i;
	int j;

	 if (array != NULL && tamanio >= 0 )
	 {
		 for (i = 0; i < tamanio - 1; i++)
		   {
			 for (j = i + 1; j < tamanio; j++)
				{
				  if (array[i] < array[j])
					{
					  aux = array[i];
					  array[i] = array[j];
					  array[j] = aux;
					}
				}
		   }

		  retorno = 0;
	 }
	 return retorno;
}

int mostrarArrayAscendente (int array[], int tamanio)
{
int	retorno = -1;

if (array != NULL && tamanio >= 0){

	for (int i = 0; i < tamanio; i++)
		{
			printf ("\norden en posicion ascendente: posicion %d, elemento %d", i,

					array [i]);
		}
	retorno = 0;
}
return retorno;
}

int mostrarArrayDecendente (int array[], int tamanio)
{
int	retorno = -1;

if (array != NULL && tamanio >= 0){

	for (int i = 0; i < tamanio; i++)
	{

		 printf ("\norden en posicion descendente: posicion %d, elemento %d", i,

		  array [i]);
	}

	  retorno = 0;
}
return retorno;
}

int promedioArray (int array[], int tamanio , float* pResultadoPromedio)
{
	int retorno = -1;
    int i;
    int acumArray = 0;

    if (array != NULL && tamanio >0 && pResultadoPromedio != NULL ){

        for (i= 0; i< tamanio ; i++){

        acumArray+= array [i];
        }

        *pResultadoPromedio = (float) acumArray/ tamanio;
    }
     retorno = 0;

    return retorno;
}
