#include "eTipo.h"
#define LIBRE 1
#define OCUPADO 0

int TIP_inicializadorEstructura(eTipoViaje lista[], int tam)
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
 int TIP_buscarIndiceLibre(eTipoViaje lista[],int tam)
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
 eTipoViaje TIP_pedirDatos()
 {
	 eTipoViaje aux;

	 aux.idTipo=UTN_pedirEnteroRango("Ingrese el numero de id: ", -158, 99999);
	 UTN_pedirCadena("Ingrese la descripcion: ", aux.descripcion, TAM_TIPO);
	 aux.isEmpty = OCUPADO;

	 return aux;
 }

 int TIP_alta(eTipoViaje lista[],int tam)
 {

 	int retorno;
 	int posicionLibre;

 	eTipoViaje tipoViajeUno;

 	retorno=-1;

 	if(lista !=NULL&&tam > 0){

 		posicionLibre= TIP_buscarIndiceLibre(lista, tam);

 		tipoViajeUno =TIP_pedirDatos();

 		if(posicionLibre!=-1){

 			lista[posicionLibre] = tipoViajeUno;
 			retorno=0;
 		}
 	}

 	return retorno;
 }
void TIP_mostrarUno(eTipoViaje tipoViaje)
{
	printf("%d - %s",tipoViaje.idTipo,tipoViaje.descripcion);
}

int TIP_mostrarTodos(eTipoViaje lista[],int tam)
{

	int retorno;

	retorno=-1;
	if(lista !=NULL&&tam>0){
		for(int i=0;i<tam;i++){
			if(lista[i].isEmpty==OCUPADO){
				TIP_mostrarUno(lista[i]);
			}

		}
		retorno=0;
	}

	return retorno;
}
eTipoViaje TIP_buscarUnoPorId(eTipoViaje listaTipoViaje[],int tamTipoViaje,int id)
{

	eTipoViaje aux;

	for(int i=0; i<tamTipoViaje;i++){

		if(listaTipoViaje[i].idTipo==id){

			aux= listaTipoViaje[i];
			break;
		}
	}

	return aux;

}
