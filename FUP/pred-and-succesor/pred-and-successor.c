#include <stdio.h>

int main() {
	float number;

	printf("Digite um número: ");
	scanf("%f", &number);

	printf("O antercessor do número %.2f é %.2f e o sucessor é %.2f\n", number, number - 1, number + 1);
	return 0;
}
