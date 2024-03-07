#include <stdio.h>

int main() {
	float value1, value2, value3, avarege;

	printf("Digite trẽs números separados por virgula para calcular a media aritmética\n");
	printf("Exemplo: 10,6,0 (Não coloque espaço entre as virgulas)\n");
	printf("Agora digite os valores: ");
	scanf("%f,%f,%f", &value1, &value2, &value3);

	avarege = (value1 + value2 + value3) / 3.0;

	printf("\nA media aritmética dos trẽs valores é: %f\n", avarege);
	return 0;
}
