/**
 * @file main.c
 * @version 1.0
 * @date 18/12/2020
 * @author J.Marcos
 * @brief Solita los datos de entrada para realizar la operación de línea de espera y salidas de clientes
 */

#include "LineaEspera.h"

/**
 * @brief Fichero principal
 * @return 0
 */
int main(){
	int i;
	int horaInicio, horaFin, vAtendida;
	int cLlegan[LIM], cajas[LIM], capacidad[LIM];
	int output[LIM], cEspera[LIM];
	
	printf("LINEA DE ESPERA\n");
	printf("Rango 0-24 horas\n\n");
	printf("Hora de inicio: ");
	scanf("%d",&horaInicio);
	printf("Hora de fin: ");
	scanf("%d",&horaFin);
	printf("Velocidad de cliente atendidos por horas: ");
	scanf("%d",&vAtendida);
	
	for(i=horaInicio;i<horaFin;i++){
		printf("\nHora: %d - %d",i,(i+1));
		printf("\nClientes en espera: ");
		scanf("%d",&cLlegan[i]);
		printf("Numero de cajas: ");
		scanf("%d",&cajas[i]);
		capacidad[i] = vAtendida*cajas[i];
	}
	
	printf("\n\n-------------------------------------- TABLA --------------------------------------\n");	
	printf("\nHora\t\t\t");
	imprimirHoras(horaInicio,horaFin);	
	printf("\nLlegada de clientes\t");
	imprimir(cLlegan,horaInicio,horaFin);
	printf("\nNo. de cajas abiertas\t");
	imprimir(cajas,horaInicio,horaFin);
	printf("\nCapacidad de salida\t");
	imprimir(capacidad,horaInicio,horaFin);
	printf("\nSalida de clientes\t");
	lEspera(capacidad,cLlegan,cEspera,horaInicio,horaFin);
	salida(capacidad,cLlegan,cEspera,output,horaInicio,horaFin);
	printf("\nLinea de espera\t\t");
	imprimir(cEspera,horaInicio,horaFin);
	printf("\nInput\t\t\t");
	input(cLlegan,horaInicio,horaFin);
	printf("\nOutput\t\t\t");
	imprimir(output,horaInicio,horaFin);
	
	return 0;
}