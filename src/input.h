
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#ifndef INPUT_H_
#define INPUT_H_


int UTN_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);
int UTN_myGets(char* cadena, int longitud);


void UTN_pedirCadena(char* mensaje, char* cadena, int largoCadena);
int UTN_pedirEnteroRango(char* mensaje, int min, int max);
int UTN_pedirFlotanteRango(char* mensaje, int min, int max);





#endif /* INPUT_H_ */
