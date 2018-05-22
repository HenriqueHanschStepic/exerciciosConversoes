#include <stdio.h>
#include <stdlib.h>
/*
 *Celsius para Kelvin 
 */
int main (){
	float temperaturaCelsius,
		  temperaturaKelvin;
		  
	temperaturaCelsius = 0;
	temperaturaKelvin = 0;
	
	printf("***********************************\n");
	printf("Digite a temperatura em Celsius: \n");
	scanf("%f",&temperaturaCelsius);
	printf("********************************\n");
	temperaturaKelvin = (temperaturaCelsius + 273);
	printf("Temperatura Celsius = %2.2f\n", temperaturaCelsius);
	printf("Temperatura Kelvin = %2.2f\n", temperaturaKelvin);
	printf("********************************\n");
	printf("\n\n");
	system("pause");
	return (0);	  
}
