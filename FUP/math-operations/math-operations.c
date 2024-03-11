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
	division = (float) number1 / number2;

	printf("\nResultado:");
	printf("\n%f + %f: %f", number1, number2,  sum);
	printf("\n%f - %f: %f", number1, number2, subtraction);
	printf("\n%f * %f: %f", number1, number2, multiplication);
	printf("\n%f / %f: %f\n", number1, number2, division);
}
