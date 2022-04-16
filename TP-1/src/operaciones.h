/*
 * operaciones_validaciones.h
 *
 *  Created on: 16 abr. 2022
 *      Author: agust
 */

#ifndef OPERACIONES_H_
#define OPERACIONES_H_

/// @fn float pagoDebito(float)
/// @brief
///
/// @param precioBase
/// @return
float pagoDebito(float precioBase);

/// @fn float pagoCredito(float)
/// @brief
///
/// @param precioBase
/// @return
float pagoCredito(float precioBase);

/// @fn float pagoBitcoin(float)
/// @brief
///
/// @param precioBase
/// @return
float pagoBitcoin(float precioBase);

/// @fn float precioUnitario(float, float)
/// @brief
///
/// @param precioBase
/// @param km
/// @return
float precioUnitario(float precioBase, float km);

/// @fn float diferencia(float, float)
/// @brief funcion que se utiliza para mostrar la direcencia entre un numero a y un numero b
///
/// @param a
/// @param b
/// @return diferencia
float diferencia(float a, float b);


#endif /* OPERACIONES_H_ */
