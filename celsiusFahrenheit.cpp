#include <stdio.h>
#include <stdlib.h>
/*
 *Celsius para Fahrenheit
 */
int main (){
	float temperaturaCelsius,
		  temperaturaFahrenheit;
		  
	temperaturaCelsius = 0;
	temperaturaFahrenheit = 0;
	
	printf("********************************\n");
	printf("Digite a temperatura em Celsius: \n");
	scanf("%f",&temperaturaCelsius);
	printf("********************************\n");
	temperaturaFahrenheit = (temperaturaCelsius * 1.8) + 32;
	printf("Temperatura Celsius = %2.2f\n", temperaturaCelsius);
	printf("Temperatura Fahrenheit = %2.2f\n", temperaturaFahrenheit);
	printf("********************************\n");
	printf("\n\n");
	system("pause");
	return (0);	  
}
