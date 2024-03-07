#include <stdio.h>

float fahrenheitToCelsius(float fahrenheit) {
	return 5 * (fahrenheit - 32) / 9;
}

float celsiusToFahrenheit(float celsius) {
	return (celsius * 9 / 5) + 32;
}

int main() {
	int option;
	float temperature;

	printf("Digite a opção: ");
	printf("\n - 1 para fahrenheit em celsius");
	printf("\n - 2 para celsius em fahrenheit");
	
	printf("\n\nOpção: ");
	scanf("%d", &option);

	printf("\nAgora digite a temperatura: ");
	scanf("%f", &temperature);

	switch (option) {
		case 1:
			printf("\nA temperatura em Celsius é: %f\n", fahrenheitToCelsius(temperature));
			break;
		case 2:
			printf("\nA temperatura em fahrenheit é: %f\n", celsiusToFahrenheit(temperature));
			break;
		default:
			printf("\nOpção não disponivel.\n");
			break;
	}
}
