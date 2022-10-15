#include "NEXO_VIAJE.h"
#include "eVaucher.h"
#define MAX_VIAJE 10
#define MAX_TIPO_VIAJE 3
#define LIBRE 1
#define OCUPADO 0
int main(void)
{
		setbuf(stdout, NULL);
		eViaje lista[MAX_VIAJE];
		eTipoViaje listaTipoViaje[MAX_TIPO_VIAJE]= {{1,"AEREO ",OCUPADO},{2,"TERRESTRE ",OCUPADO},{3,"MARITIMO ",OCUPADO}};
		eVaucher listaVaucher[MAX_VIAJE];
		int opcion;
		int respuesta;
		int id=1;
		int evaluarRetornoBAJA;
		int idVaucher=1;

		VIAJE_inicializadorEstructura(lista, MAX_VIAJE);
		VAUCHER_inicializadorEstructura(listaVaucher, MAX_VIAJE);
		do{
			respuesta= UTN_getNumero(&opcion,"\nSeleccione una opcion:(1-9) \n"
					"\n1-ALTA VIAJE: "
					"\n2-MODIFICAR VIAJE: "
					"\n3-BAJA VIAJE: "
					"\n4-LISTAR VIAJES: "
					"\n5-LISTAR TIPOS: "
					"\n6-ALTA VOUCHER: "
					"\n7-LISTAR VOUCHER: "
					"\n8-INFORMES: "
					"\n9-SALIR."
					, "ERROR.OPCION INCORRECTA", 1, 9, 10);

			if(!respuesta)
			{
				switch(opcion)
				{
				case 1:

					printf("\t\t***** ALTA VIAJE *****\n");
					if((NEXO_alta(lista, MAX_VIAJE, id, listaTipoViaje, MAX_TIPO_VIAJE))!=-1){
						id++;
					}
					break;

				case 2:
					printf("\t\t***** MODIFICAR VIAJE *****\n");
					break;
				case 3:
					printf("\t\t***** BAJA VIAJE *****\n");
					evaluarRetornoBAJA=NEXO_darBaja(lista, MAX_VIAJE, listaTipoViaje, MAX_TIPO_VIAJE);
					if(evaluarRetornoBAJA==0){
						printf("\n***** el viaje fue dado de baja *****\n");
					}
					else{
						if(evaluarRetornoBAJA==-2){

							printf("\n***** no existe el id *****\n");

						}
						else{

							printf("\n***** se fue todo al choto *****\n");
						}
					}
					break;
				case 4:
					printf("\t\t***** LISTAR VIAJES *****\n");
					NEXO_mostrarTodos(lista, MAX_VIAJE, listaTipoViaje, MAX_TIPO_VIAJE);

					break;
				case 5:
					printf("\t\t***** LISTAR TIPOS *****\n");
					TIP_mostrarTodos(listaTipoViaje, MAX_TIPO_VIAJE);
					break;
				case 6:
					printf("\t\t***** ALTA VOUCHER *****\n");
					if((VAUCHER_alta(listaVaucher, MAX_VIAJE, idVaucher))!=-1){
						idVaucher++;
					}
					break;
				case 7:
					printf("\t\t***** LISTAR VOUCHER *****\n");
					VAUCHER_mostrarTodos(listaVaucher, MAX_VIAJE);
					break;
				case 8:
					printf("\t\t***** INFORMES *****\n");
					break;
				case 9:
					printf("\t\t***** SALIR *****\n");

					break;
				}
			}

		}while(opcion!=9);

	return 0;
}
