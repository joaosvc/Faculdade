#include <stdio.h>

int main() {
	float fahrenheit, celsius;

	printf("Digite a temperatura em fahrenheit para converter para celsius: ");
	scanf("%f", &fahrenheit);

	celsius = 5 * (fahrenheit - 32) / 9;

	printf("\nA temperatura em Celsius é: %f\n", celsius);
	return 0;
}
