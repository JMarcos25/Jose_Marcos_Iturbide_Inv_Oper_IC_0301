/**
 * @file main.c
 * @version 1.0
 * @date 04/11/2020
 * @author J.Marcos
 * @brief Solita los datos de las coordenadas
 */

#include "ruta.h"

/**
 * @brief Fichero principal
 * @return 0
 */
int main(){
	int i, aris, x[MAX], y[MAX];
	int inicial, final, final2;
	int rep;
	printf("Numero de aristas: ");
	scanf("%d",&aris);
	for(i=0; i<aris; i++){
		printf("\nCordenadas de Adyacencia #%i\n",i+1);
		printf("x: ");
		scanf("%d",&x[i]);
		printf("y: ");
		scanf("%d",&y[i]);
	}
	imprimir_cordenadas(aris, x, y);
	do{
		printf("\nNodo inicial: ");
		scanf("%d",&inicial);
		printf("Nodo final: ");
		scanf("%d",&final);
		buscar_ruta(aris, x, y, inicial, final);
		final2=buscar_ruta(aris, x, y, inicial, final);
		existe_recorrido(inicial, final, final2);
		printf("\n\nBuscar otro recorrido Si: 1 No: 0 --> ");
		scanf("%d",&rep);
	}while(rep==1);
	return 0;
}