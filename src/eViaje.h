#ifndef EVIAJE_H_
#define EVIAJE_H_
#include "input.h"
#define TAM_VIAJE 20
typedef struct{

	int idViaje;
	char destino[TAM_VIAJE];
	int cantidadPasajeros;
	int idTipo;
	int isEmpty;
}eViaje;

int VIAJE_inicializadorEstructura(eViaje lista[], int tam);
int VIAJE_buscarIndiceLibre(eViaje lista[],int tam);
eViaje VIAJE_pedirDatosViaje(int id);
int VIAJE_alta(eViaje lista[],int tam, int id);
void VIAJE_mostrarUno(eViaje viaje);
int VIAJE_mostrarTodos(eViaje lista[],int tam);
eViaje VIAJE_buscarUnoPorId(eViaje lista[],int tam,int id);
int VIAJE_buscarPosicionPorId(eViaje lista[],int tam,int id);






#endif /* EVIAJE_H_ */
