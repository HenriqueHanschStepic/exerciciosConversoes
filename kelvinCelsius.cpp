#include <stdio.h>
#include <stdlib.h>
/*
 *Kelvin para Celsius  
 */
int main (){
	float temperaturaCelsius,
		  temperaturaKelvin;
		  
	temperaturaCelsius = 0;
	temperaturaKelvin = 0;
	
	printf("***********************************\n");
	printf("Digite a temperatura em Kelvin: \n");
	scanf("%f",&temperaturaKelvin);
	printf("********************************\n");
	temperaturaCelsius = (temperaturaKelvin - 273);
	printf("Temperatura Kelvin = %2.2f\n", temperaturaKelvin);
	printf("Temperatura Celsius = %2.2f\n", temperaturaCelsius);
	printf("********************************\n");
	printf("\n\n");
	system("pause");
	return (0);	  
}
