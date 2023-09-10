#include <stdio.h>

int main(void)

{
	float distancia, litros, media;
	printf("digite a distancia percorrida: ");
	scanf("%f",&distancia);
	
	printf("digite a quatidade de litros: ");
	scanf("%f",&litros);
	
	media= (distancia) / litros;
	
	printf("Consumo medio do automovel= %f\n",media);
	
	return 0;
} 
