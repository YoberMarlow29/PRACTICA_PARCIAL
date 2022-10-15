#ifndef NEXO_VIAJE_H_
#define NEXO_VIAJE_H_
#include "eTipo.h"
#include "eViaje.h"
eViaje NEXO_pedirDatosViaje(int id, eTipoViaje listaTipoViaje[],int tamTipoViaje);
int NEXO_alta(eViaje lista[],int tam, int id,eTipoViaje listaTipoViaje[],int tamTipoViaje);
void NEXO_mostrarUno(eViaje viaje,eTipoViaje listaTipoViaje[],int tamTipoViaje);
int NEXO_mostrarTodos(eViaje lista[],int tam,eTipoViaje listaTipoViaje[],int tamTipoViaje);
int NEXO_darBaja(eViaje lista[],int tam, eTipoViaje listaTipoViaje[],int tamTipoViaje);
//int NEXO_modificar(eViaje lista[],int tam,eTipoViaje listaTipoViaje[],int tamTipoViaje);


#endif /* NEXO_VIAJE_H_ */
