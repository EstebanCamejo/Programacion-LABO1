/*
 * utn_getNumero.h
 *
 *  Created on: 12 abr 2022
 *      Author: Usuario
 */
#ifndef UTN_GETNUMERO_H_
#define UTN_GETNUMERO_H_

//
int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);//menu OK

int utn_getNumeroFloat(float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos);

int utn_getNumeroCaracter(char* pResultado, char* mensaje, char* mensajeError, char minimo, char maximo, int reintentos);

int calculoDescuento(float* resultadoDescuento, float precio, float descuento);

int calculoInteres(float* resultadoInteres, float precio, float interes);

int calculoBitcoin(float* resultadoBitcoin, float precio, float bitcoin);

int calculoDivision(float* resultadoDivision,float operador1, float operador2);

int calculoDiferencia(float* resuladoDiferencia, float operador1, float operador2);



int inicializarArray (int array[], int tamanio);	//OK a -1

int maximoArray (int array[], int tam, int* maximo); //FALTA

int minimoArray (int array[], int tam, int* minimo); //FALTA

int ordenamientoArrayAscendente (int array[], int tamanio);
// ordenamiento
int ordenamientoArrayDecendente (int array[], int tamanio);

int mostrarArrayDecendente (int array[], int tamanio);

int mostrarArrayAscendente (int array[], int tamanio);
// array ordenado
int promedioArray (int array[], int tamanio , float* pResultadoPromedio);


//



#endif /* UTN_GETNUMERO_H_ */
