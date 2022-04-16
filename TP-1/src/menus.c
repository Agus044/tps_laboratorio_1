/*
 * menus.c
 *
 *  Created on: 16 abr. 2022
 *      Author: agust
 */

#include "menus.h"

float precioAerolineasArg = 0;
float precioDebitoAerolineasArg = 0;
float precioCreditoAerolineasArg = 0;
float precioBitcoinAerolineasArg = 0;
float precioUnitarioAerolineasArg = 0;

float precioLatam = 0;

int menu_principal(){

	setbuf(stdout, NULL);
	int opcion;
	char salir = 'n';

	do{

		printf(" *** MENU DE OPCIONES *** \n");
		printf("1- Ingresar kilometros: \n");
		printf("2- Ingresar precio de vuelos \n");
		printf("3- Calcular todos los costos \n");
		printf("4- Informar resultados \n");
		printf("5- Carga forzada de datos \n");
		printf("6- Salir \n");
		scanf("%d", &opcion);

		switch(opcion){

		case 1:
			float km;
			printf("Ingresaste %d kilometros \n", km);
			scanf("%d", km);
			break;
		case 2:
			menu_precios(precioAerolineasArg, precioLatam);
			break;
		case 3:
			precioDebitoAerolineasArg = pagoDebito(precioAerolineasArg);
			precioCreditoAerolineasArg = pagoCredito(precioAerolineasArg);
			precioBitcoinAerolineasArg = pagoBitcoin(precioAerolineasArg);
			precioUnitarioAerolineasArg = precioUnitario(precioAerolineasArg, km);
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			salir = 's';
			break;
		}

	}while(salir != 's');

	return opcion;
}

int menu_precios(float precioAerolineasArg, float precioLatam){

	int opcion;

	printf("Ingresar precio de vuelos: Aerolineas Argentinas: $%.2f // Latam: $%.2f \n", precioAerolineasArg, precioLatam);
	printf("1- Precio por Aerolineas Argentinas \n");
	printf("2- Precio por Latam \n");
	printf("Seleccione la aerolinea deseada: ");
	scanf("%d", &opcion);

	return opcion;
}

