#ifndef ETIPO_H_
#define ETIPO_H_
#include "input.h"
#define TAM_TIPO 30
typedef struct{

	int idTipo;
	char descripcion[TAM_TIPO];
	int isEmpty;

}eTipoViaje;
int TIP_inicializadorEstructura(eTipoViaje lista[], int tam);
int TIP_buscarIndiceLibre(eTipoViaje lista[],int tam);
eTipoViaje TIP_pedirDatos();
int TIP_alta(eTipoViaje lista[],int tam);
void TIP_mostrarUno(eTipoViaje tipoViaje);
int TIP_mostrarTodos(eTipoViaje lista[],int tam);
eTipoViaje TIP_buscarUnoPorId(eTipoViaje listaTipoViaje[],int tamTipoViaje,int id);



#endif /* ETIPO_H_ */
