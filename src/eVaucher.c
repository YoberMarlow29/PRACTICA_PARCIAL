#include "eVaucher.h"
#define LIBRE 1
#define OCUPADO 0
int VAUCHER_inicializadorEstructura(eVaucher lista[], int tam)
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
int VAUCHER_buscarIndiceLibre(eVaucher lista[],int tam)
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
eVaucher VAUCHER_pedirDatosVaucher(int id)
{
	 eVaucher aux;
	 aux.idVaucher= id;
	 aux.idViajeVaucher=UTN_pedirEnteroRango("Ingrese el numero de id: ", -158, 99999);
	 UTN_pedirCadena("Ingrese una descripcion", aux.descripcion, TAM_VAUCHER);
	 aux.precioViaje=UTN_pedirFlotanteRango("Ingrese el precio del viaje:", 1, 99999);
	 aux.fecha.dia=UTN_pedirEnteroRango("Ingrese el dia: ", 1, 32);
	 aux.fecha.mes=UTN_pedirEnteroRango("Ingrese el mes: ", 1, 12);
	 aux.fecha.anio=UTN_pedirEnteroRango("Ingrese el anio: ", 1, 5000);
	 aux.isEmpty=OCUPADO;
	 return aux;
}
int VAUCHER_alta(eVaucher lista[],int tam, int id)
{

	int retorno;
	int posicionLibre;

	eVaucher vaucherUno;

	retorno=-1;

	if(lista !=NULL&&tam > 0){

		posicionLibre= VAUCHER_buscarIndiceLibre(lista, tam);

		vaucherUno =VAUCHER_pedirDatosVaucher(id);

		if(posicionLibre!=-1){

			lista[posicionLibre] = vaucherUno;
			retorno=0;
		}
	}

	return retorno;
}
void VAUCHER_mostrarUno(eVaucher vaucher)
{

	printf("%d - %d - %s - %f - %d/%d/%d\n",vaucher.idVaucher,vaucher.idViajeVaucher,vaucher.descripcion,vaucher.precioViaje,vaucher.fecha.dia,vaucher.fecha.mes,vaucher.fecha.anio);
}
int VAUCHER_mostrarTodos(eVaucher lista[],int tam)
{

	int retorno;

	retorno=-1;
	if(lista !=NULL&&tam>0){
		for(int i=0;i<tam;i++){
			if(lista[i].isEmpty==OCUPADO){
				VAUCHER_mostrarUno(lista[i]);
			}

		}
		retorno=0;
	}

	return retorno;
}
