/**
 * @file ruta.h
 * @version 1.0
 * @date 04/11/2020
 * @author J.Marcos
 * @brief Existe alguna ruta en las coordenadas
 */
#ifndef __RUTA_H
#define __RUTA_H

#include <stdio.h>

#define MAX 10

/**
 * @brief imprimir_coordenadas Imprime las coordenadas
 * @param aris Indica el nÃºmero de aristas/nodos
 * @param num Indica las coordenas x
 * @param num2 Indica las coordenas y
 */
void imprimir_cordenadas(int aris, int num[MAX], int num2[MAX]);

/**
 * @brief buscar_ruta Busca en las coordenas si existe alguna ruta
 * @param aris Indica el nÃºmero de numero de aristas/nodos
 * @param num Indica las coordenas x
 * @param num2 Indica las coordenas y
 * @param inicial Indica el nÃºmero inicial del nodo
 * @param final Indica el nÃºmero final del nodo
 * @return Un número igual al final o 0
 */
int buscar_ruta(int aris, int num[MAX], int num2[MAX],int inicial2, int final);

/**
 * @brief existe_recorrido Imprime si existe algun recorrido en las coordenadas
 * @param inicial Indica el número inicial del nodo
 * @param final Indica el número final del nodo
 * @param final2 Indica el número final2 para determinar si existe recorrido
 */
void existe_recorrido(int inicial, int final, int final2);

#endif
