#include "NEXO_VIAJE.h"
#define LIBRE 1
#define OCUPADO 0
eViaje NEXO_pedirDatosViaje(int id, eTipoViaje listaTipoViaje[],int tamTipoViaje)
{

	eViaje aux;

	aux.idViaje= id;
	UTN_pedirCadena("Ingrese el destino: ", aux.destino, TAM_VIAJE);
	aux.cantidadPasajeros=UTN_pedirEnteroRango("Ingrese la cantidad de pasajeros: ", 1, 100);
	TIP_mostrarTodos(listaTipoViaje, tamTipoViaje);
	aux.idTipo=UTN_pedirEnteroRango("\nSeleccione el id del tipo: ", -1000, 9000);
	aux.isEmpty=OCUPADO;
	return aux;
}
int NEXO_alta(eViaje lista[],int tam, int id,eTipoViaje listaTipoViaje[],int tamTipoViaje)
{

	int retorno;
	int posicionLibre;

	eViaje viajeUno;

	retorno=-1;

	if(lista !=NULL&&tam > 0){

		posicionLibre= VIAJE_buscarIndiceLibre(lista, tam);

		viajeUno =NEXO_pedirDatosViaje(id, listaTipoViaje,tamTipoViaje);

		if(posicionLibre!=-1){

			lista[posicionLibre] = viajeUno;
			retorno=0;
		}
	}

	return retorno;
}
void NEXO_mostrarUno(eViaje viaje,eTipoViaje listaTipoViaje[],int tamTipoViaje)
{
	int id;
	eTipoViaje aux;
	id= viaje.idTipo;
	aux= TIP_buscarUnoPorId(listaTipoViaje, tamTipoViaje, id);
	printf("%d - %s - %d - %d - %s\n",viaje.idViaje,viaje.destino,viaje.cantidadPasajeros,viaje.idTipo,aux.descripcion);
}
int NEXO_mostrarTodos(eViaje lista[],int tam,eTipoViaje listaTipoViaje[],int tamTipoViaje)
{

	int retorno;

	retorno=-1;
	if(lista !=NULL&&tam>0){
		for(int i=0;i<tam;i++){
			if(lista[i].isEmpty==OCUPADO){
				NEXO_mostrarUno(lista[i], listaTipoViaje, tamTipoViaje);
			}

		}
		retorno=0;
	}

	return retorno;
}
int NEXO_darBaja(eViaje lista[],int tam, eTipoViaje listaTipoViaje[],int tamTipoViaje)
{

	int id;
	int posicion;
	int retorno;

	retorno=-1;
	NEXO_mostrarTodos(lista, tam, listaTipoViaje, tamTipoViaje);
	id=UTN_pedirEnteroRango("Seleccion un id: ", 1, 5000);
	posicion=VIAJE_buscarPosicionPorId(lista, tam, id);
	if(posicion!=-1){
		lista[posicion].isEmpty = LIBRE;

		retorno=0;
	}
	else{

		retorno=-2;
	}


	return retorno;
}
/*int NEXO_modificar(eViaje lista[],int tam,eTipoViaje listaTipoViaje[],int tamTipoViaje)
{
	int retorno;
	int id;
	int posicion;
	retorno=-1;
	NEXO_mostrarTodos(lista, tam, listaTipoViaje, tamTipoViaje);
	id=UTN_pedirEnteroRango("Seleccion un id: ", 1, 5000);
	posicion=VIAJE_buscarPosicionPorId(lista, tam, id);

	return retorno;
}*/
