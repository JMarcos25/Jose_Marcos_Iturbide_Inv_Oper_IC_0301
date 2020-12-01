/**
 * @file ruta.h
 * @version 1.3
 * @date 26/11/2020
 * @author J.Marcos
 * @brief Realiza las formulas del método simplex para maximir una grafica
 */

#ifndef __METODOSIMPLEX_H
#define __METODOSIMPLEX_H

#include <stdio.h>
#include <stdlib.h>

#define MAX 10
#define LIM 5

/**
 * @brief Muestra la tabla del metodo simplex con los datos agregados por el usuario.
 * @param num Indica los valores(variables) que contien z, en el método simplex.
 * @param num_dos Indica las restricciones del método simplex. 
 * @param num_tres Indica las constantes de las restricciones.
 * @return void
 */
void imprimir_tabla_simplex_uno(float num[LIM],float num_dos[LIM][LIM],float num_tres[LIM],int v,int r);

/**
 * @brief Muestra la tabla del metodo simplex una vez hecha las formulas.
 * @param num Indica los valores(variables) que contendra z, en el método simplex.
 * @param num_dos Indica las restricciones del método simplex. 
 * @param num_tres Indica las constantes de las restricciones.
 * @param v Indica los números de variables agregados.
 * @param r Indica el número de restricciones gregados.
 * @param z2 Indica la constante agregada en z.
 * @return void 
 */
void imprimir_tabla_simplex_dos(float num[LIM],float num_dos[LIM][LIM],float num_tres[LIM],int v,int r,float z2);

/**
 * @brief Busca el valor menor dentro de un arreglo.
 * @code 
 * for (n=0; n<v; n++){
	    if (num[n] > menor){
	    	menor=num[n];
	    }
	}
 * @endcode
 * @param num Arreglo que se desea buscar menor.
 * @param v Indica los números de variables agregados.
 * @return El número menor  del arreglo.
 */
int buscar_menor(float num[LIM],int v);

/**
 * @brief Busca la posición menor dentro de un arreglo.
 * @code 
 * for (n=0; n<v; n++){
	    if (num[n] > menor){
	    	menor=num[n];
	    	aux=n;
	    }
	}
 * @endcode
 * @param num Arreglo que se desea buscar menor.
 * @param v Indica los números de variables agregados.
 * @return La posición menor del arreglo.
 */
int buscar_posicion(float num[LIM],int v);

/**
 * @brief Busca el valor menor dentro de un arreglo, con la diferencia que este indique el lado contrario
 *  del for.
 * @code 
 * for (n=0; n<v; n++){
	    if (num[n] < menor){
	    	menor=num[n];
	    }
	}
 * @endcode
 * @param num Arreglo que se desea buscar menor.
 * @param v Indica los números de variables agregados.
 * @return El número menor del arreglo.
 */
int buscar_menor2(float num[LIM],int v);

/**
 * @brief Busca la posición menor dentro de un arreglo.
 * @code 
 * for (n=0; n<v; n++){
	    if (num[n] < menor){
	    	menor=num[n];
	    	aux=n;
	    }
	}
 * @endcode
 * @param num Arreglo que se desea buscar menor.
 * @param v Indica los números de variables agregados.
 * @return La posición menor del arreglo.
 */
int buscar_posicion2(float num[LIM],int v);

/**
 * @brief Imprime la columna pivote del método simplex
 * @param num Indica las restricciones del método simplex. 
 * @param r Indica el número de restricciones gregados.
 * @param aux Es la posición guardada para la columna.
 * @return void
 */
void columna_pivote(float num[LIM][LIM], int r,int aux);

/**
 * @brief Imprime la fila pivote del método simplex
 * @param num Indica las restricciones del método simplex. 
 * @param num_dos Indica un axilioliar para las constantes de las restricciones.
 * @param rcons Arreglo auxiliar que guarda los datos de la formula.
 * @param r Indica el número de restricciones gregados.
 * @param aux Es la posición guardada para la fila.
 * @return void
 */
void fila_pivote(float num[LIM][LIM],float num_dos[LIM],float rcons[LIM],int r,int aux);

/**
 * @brief Muestra el elemento pivote con respecto a la tabla.
 * @param num Indica las restricciones del método simplex.
 * @param aux Valor que contiene la posición auxiliar para la columna.
 * @param aux2 Valor que contiene la posición auxiliar para la fila.
 * @return void 
 */
void elemento_pivote(float num[LIM][LIM],int aux2,int aux);

/**
 * @brief Muestra el elemento pivote con respecto a la tabla.
 * @param nfp Arreglo para guardar los datos para las restricciones de la nueva fila pivote.
 * @param nfp2 Arreglo para guardar los datos para las cosntantes de la nueva fila pivote.
 * @param num Indica las restricciones del método simplex. 
 * @param num_dos Indica las constantes de las restricciones.
 * @param aux Valor que contiene la posición auxiliar para la columna.
 * @param aux2 Valor que contiene la posición auxiliar para la fila.
 * @param v Indica los números de variables agregados.
 * @return void 
 */
void nueva_fila_pivote(float nfp[LIM][LIM],float nfp2[LIM],float num[LIM][LIM],float num_dos[LIM],int aux2,int aux,int v);

/**
 * @brief Elabora la tabla del metodo simplex una vez hecha las formulas.
 * @param num Indica las funcones que contiene z, en el método simplex.
 * @param num_dos Indica las restricciones del método simplex. 
 * @param num_tres Indica las constantes de las restricciones.
 * @param menor Elemento menor de la variable.
 * @param nfp Arreglo para guardar los datos para las restricciones de la nueva fila pivote.
 * @param nfp2 Arreglo para guardar los datos para las cosntantes de la nueva fila pivote.
 * @param v Indica los números de variables agregados.
 * @param r Indica el número de restricciones gregados.
 * @param aux Valor que contiene la posición auxiliar para la columna.
 * @param aux2 Valor que contiene la posición auxiliar para la fila.
 * @return void 
 */
void obtener_nueva_tabla(float funcion[LIM],float restriccion[LIM][LIM],float constante[LIM],float menor,float nfp[LIM][LIM],float nfp2[LIM],int v,int r,int aux2,int aux);

/**
 * @brief Obtiene el valo de la constante de z. 
 * @param z2 Guarda el valor de la constante de z.
 * @param num Indica un axilioliar para las constantes de las restricciones.
 * @param menor Elemento menor de la variable.
 * @param aux2 Valor que contiene la posición auxiliar para la fila.
 * @return El valor de la constante de z.
 */
int obtener_resultado_z(float z2,float num[LIM],float menor,int aux2);

/**
 * @brief Gráfica el método del la tabla con Gnuplot.
 * @param num Indica los valor de las restricciones guardados en un auxiliar.
 * @param num2 Indica los valores de las constantes guardados en un auxiliar.
 * @param r Indica el número de restricciones gregados.
 * @param v Indica los números de variables agregados.
 * @return void
 */
void graficaMaximizar(float num[LIM][LIM], float num2[LIM], int r, int v);

#endif
