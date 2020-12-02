/**
 * @file Ruta.c
 * @version 1.0
 * @date 04/11/2020
 * @author J.Marcos
 * @brief Funciones
 */

#include "ruta.h"

void imprimir_cordenadas(int aris, int num[MAX], int num2[MAX]){
	int i;
	printf("\nCordenadas\n");
	for(i=0; i<aris; i++){
		printf("[%d] [%d]",num[i],num2[i]);
		printf("\n");
	}
}

int buscar_ruta(int aris, int num[MAX], int num2[MAX],int inicial, int final){
	int i, aris2=0,final2=0;
	int inicial2=inicial;
	do{
		inicial=inicial2;
		for(i=0; i<aris; i++){
			if(inicial==num[i]){		
				inicial2 = num2[i];
				if (inicial2 == final){
					i=aris;
					aris2=aris;
					final2=final;
				}
			}
		}
		aris2++;
	}while(aris2<aris);
	return final2;
}

void existe_recorrido(int inicial, int final, int final2){
	if(final==final2){
		printf("\nSi existe recorrido del nodo %d al nodo %d",inicial,final);
	}else{
		printf("\nNo existe recorrido del nodo %d al nodo %d",inicial,final);
	}
}

