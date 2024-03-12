#include <stdio.h>

int main() {
	float productN1, productN2, productN3;
	int productC1, productC2, productC3;
	float productV1, productV2, productV3;
	float money;

	printf("Digite o nome, quantidade e preco dos produtos separados por ponto e virgula (:) em seguida digite mais dois produtos separados por virgula\nProdutos: ");
	scanf("%s:%d:%f,%s:%d:%f,%s:%d:%f", &productN1, &productC1, &productV1, &productN2, &productC2, &productV2, &productN3, &productC3, &productV3);

	printf("\nAgora digite quanto voce tem na carteira: ");
	scanf("%f", &money);

	float fullPrice = ((productV1 * productN1) + (productV2 * productN2) + (productV3 * productN3));

	printf("Money: %f, total: %f", money, fullPrice);
	return 0;
}
