/**
 * @file EcuacionLineal.c
 * @version 1.0
 * @date 23/11/2020
 * @author J.Marcos Iturbide
 * @brief Solita los datos de las coordenadas y realiza la grafica con Gnuplot
 */
#include <stdio.h>
#include <stdlib.h>
#include "gnuplot_i.h"

/**
 * @brief Fichero principal
 * @return 0
 */
int main(){
	int m, b, rango1, rango2;

	printf("\nEcuaciones lineales\nFormula: y = mx + b\n\n");
	printf("Valor de m: ");
	scanf("%d",&m);
	printf("Valor de b: ");
	scanf("%d",&b);
	printf("Rango inicial: ");
	scanf("%d",&rango1);
	printf("Rango final: ");
	scanf("%d",&rango2);
	printf("\n");
	imprimirCoordenadas(m, b, rango1, rango2);
	graficaLineal(m, b, rango1, rango2);

	return 0;
}
