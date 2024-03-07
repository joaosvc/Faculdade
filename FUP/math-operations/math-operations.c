#include <stdio.h>

int main() {
	float number1, number2;

	printf("Digite dois números para executar as operações matemáticas\n");
	printf("Digite os números separados por virgula (Não use espaço): ");
	scanf("%f,%f", &number1, &number2);

	float sum, subtraction, multiplication, division;

	sum = number1 + number2;
	subtraction = number1 - number2;
	multiplication = number1 * number2;
	division = number1 / number2;

	printf("\nResultado:");
	printf("\nSoma: %f", sum);
	printf("\nSubtração: %f", subtraction);
	printf("\nMultiplicação: %f", multiplication);
	printf("\nDivisão: %f\n", division);
}
