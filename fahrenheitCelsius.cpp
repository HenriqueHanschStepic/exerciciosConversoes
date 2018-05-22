#include <stdio.h>
#include <stdlib.h>
/*
 *Fahrenheit para Celsius  
 */
int main (){
	float temperaturaFahrenheit,
	      temperaturaCelsius;
		  
	temperaturaCelsius = 0;
	temperaturaFahrenheit = 0;
	
	printf("***********************************\n");
	printf("Digite a temperatura em Fahrenheit: \n");
	scanf("%f",&temperaturaFahrenheit);
	printf("********************************\n");
	temperaturaCelsius = (temperaturaFahrenheit - 32) / 1.8;
	printf("Temperatura Fahrenheit = %2.2f\n", temperaturaFahrenheit);
	printf("Temperatura Celsius = %2.2f\n", temperaturaCelsius);
	printf("********************************\n");
	printf("\n\n");
	system("pause");
	return (0);	  
}
