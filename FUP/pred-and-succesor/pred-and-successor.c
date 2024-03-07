#include <stdio.h>

int main() {
	float number, predecessor, successor;

	printf("Digite um número: ");
	scanf("%f", &number);

	predecessor = number - 1;
	successor = number + 1;

	printf("O antercessor do número %f é %f e o sucessor é %f\n", number, predecessor, successor);
	return 0;
}
