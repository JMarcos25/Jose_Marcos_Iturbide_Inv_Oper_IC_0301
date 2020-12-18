/**
 * @file LineaEspera.c
 * @version 1.0
 * @date 18/12/2020
 * @author J.Marcos
 * @brief Realiza los metodos para obtener la operación de línea de espera y salidas de clientes
 */

#include "LineaEspera.h"

void imprimir(int num[LIM], int a, int b){
	int i;
	for(i=a;i<b;i++){
		printf("%d\t",num[i]);
	}
	printf("\n");
}

void imprimirHoras(int a, int b){
	int i;
	for(i=a;i<b;i++){
		printf("%d-%d\t",i,i+1);
	}
	printf("\n");
}

void salida(int num[LIM]/*capacidad*/, int num2[LIM]/*cLlegan*/, int cEspera[LIM], int output[LIM], int a, int b){
	int i;
	int salida;
	output[a-1]=0;
	for(i=a;i<b;i++){
		if(cEspera[i]==0){
			salida=num2[i];
			printf("%d\t",salida);
		}else{
			salida=num[i];
			printf("%d\t",salida);
		}
		output[i]=salida+output[i-1];
	}
	printf("\n");
}

void lEspera(int num[LIM], int num2[LIM], int cEspera[LIM], int a, int b){
	int i;
	cEspera[a-1]=0;
	for(i=a;i<b;i++){
		cEspera[i]=num2[i]-num[i]+cEspera[i-1];
		if(cEspera[i]<0){
			cEspera[i]=0;
		}
	}
}

void input(int num[LIM], int a, int b){
	int i;
	int input=0;
	for(i=a;i<b;i++){
		input+=num[i];
		printf("%d\t",input);
	}
	printf("\n");
}
