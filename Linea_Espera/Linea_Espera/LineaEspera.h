/**
 * @file LineaEspera.h
 * @version 1.0
 * @date 18/12/2020
 * @author J.Marcos
 * @brief Mediante las entradas y salidas realiza un procedimiento que obtendrá un mismo resultado
 *  en una linea de espera
 */

#ifndef __LINEAESPERA_H
#define __LINEAESPERA_H

#include <stdio.h>

#define LIM 24

/**
 * @brief Imprime un arreglo unidimensional
 * @param num Indica la matriz a imprimir
 * @param a Indica el punto inicial
 * @param b Indica el punto final
 * @return void
 */
void imprimir(int num[LIM], int a, int b);

/**
 * @brief Imprime el rango de una hora. Ejemplo: 8-9. Rango de una hora
 * @param a Indica el punto inicial
 * @param b Indica el punto final
 * @return void
 */
void imprimirHoras(int a, int b);

/**
 * @brief Realiza e imrpime los valores de la salida de clientes
 * @param num Indica el arreglo que tiene la capacidad de salida 
 * @param num2 Indica el arreglo que tiene de los clientes que llegan
 * @param cEspera Indica el arreglo que tiene los clientes de espera
 * @param output Arreglo que contendra la suma de las salida de clientes
 * @param a Indica el punto inicial
 * @param b Indica el punto final
 * @return void
 */
void salida(int num[LIM], int num2[LIM],  int cEspera[LIM], int output[LIM],int a, int b);

/**
 * @brief Guarda los valores que tendra en la linea de espera
 * @param num Indica el arreglo que tiene la capacidad de salida 
 * @param num2 Indica el arreglo que tiene los clientes que llegan
 * @param cEspera Indica el arreglo que tiene los clientes de espera
 * @param a Indica el punto inicial
 * @param b Indica el punto final
 * @return void
 */
void lEspera(int num[LIM], int num2[LIM], int cEspera[LIM], int a, int b);

/**
 * @brief Imprime la suma de los clientes de entrada
 * @param num Indica el arreglo que tiene los clientes que llegan
 * @param a Indica el punto inicial
 * @param b Indica el punto final
 * @return void
 */
void input(int num[LIM], int a, int b);

#endif