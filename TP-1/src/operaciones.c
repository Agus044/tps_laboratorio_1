/*
 * operaciones_validaciones.c
 *
 *  Created on: 16 abr. 2022
 *      Author: agust
 */

float pagoDebito(float precioBase){

	float pagoDebito;
	pagoDebito = precioBase - ((precioBase * 10) / 100);
	return pagoDebito;
}


float pagoCredito(float precioBase){

	float precioCredito;
	precioCredito = precioBase + ((precioBase * 25) / 100);
	return precioCredito;

}

float pagoBitcoin(float precioBase){

	float precioBitcoin;
	precioBitcoin = precioBase/4606954.55;
	return precioBitcoin;
}

float precioUnitario(float precioBase, float km){

	float precioUnitario;
	precioUnitario = precioBase/km;
	return precioUnitario;
}

float diferencia(float a, float b){

	return (a - b);

}
