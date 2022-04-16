/*
 * main.h
 *
 *  Created on: 12 abr. 2022
 *      Author: agust
 */

#ifndef MENUS_H_
#define MENUS_H_

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/// funcion que muestra un menu con opciones
///
///
/// @return opcion
int menu_principal();

/// @fn int menu_precios(float, float)
/// @brief funcion que muestra un submenu en el cual se ven cargados los precios de las aerolineas
///
/// @param precioAerolineasArg
/// @param precioLatam
/// @return
int menu_precios(float precioAerolineasArg, float precioLatam);

#endif /* MENUS_H_ */
