#include <stdio.h>

int main() {
	float celsius, fahrenheit;

	printf("Digite a temperatura em Celsius para converter para fahrenheit: ");
	scanf("%f", &celsius);

	fahrenheit = (celsius * 9 / 5) + 32;

	printf("\nA temperatura em fahrenheit é: %f\n", fahrenheit);
	return 0;
}
