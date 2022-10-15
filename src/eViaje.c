#include "eViaje.h"
#define LIBRE 1
#define OCUPADO 0

int VIAJE_inicializadorEstructura(eViaje lista[], int tam)
{
	int retorno;
	retorno=-1;
	if(lista != NULL && tam>0){

		for(int i=0;i<tam;i++){
			lista[i].isEmpty = LIBRE;
		}
		retorno =0;
	}

	return retorno;
}
int VIAJE_buscarIndiceLibre(eViaje lista[],int tam)
{
	 int retorno;
	 retorno=-1;

	 if(lista != NULL && tam>0){
	 		for(int i=0;i<tam;i++){
	 			if(lista[i].isEmpty == LIBRE){
	 				retorno=i;
	 				break;
	 			}
	 		}
	 	}
	 return retorno;
}

eViaje VIAJE_pedirDatosViaje(int id)
{

	eViaje aux;

	aux.idViaje= id;
	UTN_pedirCadena("Ingrese el destino: ", aux.destino, TAM_VIAJE);
	aux.cantidadPasajeros=UTN_pedirEnteroRango("Ingrese la cantidad de pasajeros: ", 1, 100);
	aux.idTipo=UTN_pedirEnteroRango("Seleccione el id del tipo: ", 1000, 9000);
	aux.isEmpty=OCUPADO;

	return aux;
}
int VIAJE_alta(eViaje lista[],int tam, int id)
{

	int retorno;
	int posicionLibre;

	eViaje viajeUno;

	retorno=-1;

	if(lista !=NULL&&tam > 0){

		posicionLibre= VIAJE_buscarIndiceLibre(lista, tam);

		viajeUno =VIAJE_pedirDatosViaje(id);

		if(posicionLibre!=-1){

			lista[posicionLibre] = viajeUno;
			retorno=0;
		}
	}

	return retorno;
}
void VIAJE_mostrarUno(eViaje viaje)
{

	printf("%d - %s - %d - %d\n",viaje.idViaje,viaje.destino,viaje.cantidadPasajeros,viaje.idTipo);
}
int VIAJE_mostrarTodos(eViaje lista[],int tam)
{

	int retorno;

	retorno=-1;
	if(lista !=NULL&&tam>0){
		for(int i=0;i<tam;i++){
			if(lista[i].isEmpty==OCUPADO){
				VIAJE_mostrarUno(lista[i]);
			}

		}
		retorno=0;
	}

	return retorno;
}
eViaje VIAJE_buscarUnoPorId(eViaje lista[],int tam,int id)
{

	eViaje aux;

	for(int i=0; i<tam;i++){

		if(lista[i].idViaje==id){

			aux= lista[i];
			break;
		}
	}
	return aux;
}
int VIAJE_buscarPosicionPorId(eViaje lista[],int tam,int id)
{

	int aux;
	aux=-1;
	for(int i=0; i<tam;i++){

		if(lista[i].isEmpty==OCUPADO && lista[i].idViaje==id){

			aux=i;
			break;
		}
	}
	return aux;
}
