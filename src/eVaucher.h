#ifndef EVAUCHER_H_
#define EVAUCHER_H_
#include "eViaje.h"
#define TAM_VAUCHER 30
typedef struct{

	int dia;
	int mes;
	int anio;
	int isEmpty;

}eFecha;
typedef struct{

	int idVaucher;
	int idViajeVaucher;
	char descripcion[TAM_VAUCHER];
	float precioViaje;
	eFecha fecha;
	int isEmpty;

}eVaucher;
int VAUCHER_inicializadorEstructura(eVaucher lista[], int tam);
int VAUCHER_buscarIndiceLibre(eVaucher lista[],int tam);
eVaucher VAUCHER_pedirDatosVaucher(int id);
int VAUCHER_alta(eVaucher lista[],int tam, int id);
void VAUCHER_mostrarUno(eVaucher vaucher);
int VAUCHER_mostrarTodos(eVaucher lista[],int tam);

#endif /* EVAUCHER_H_ */
