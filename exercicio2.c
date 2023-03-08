#include <stdio.h>

int main(void) {
	float n1;
	float n2;
	printf("Qual a primeira nota do aluno?\n");
	scanf("%f", &n1);
	printf("Qual a segunda nota do aluno?\n");
	scanf("%f", &n2);
	float media = (n1 * 3 + n2 * 7) / 10;
	printf("Nota 1: %.1f\n", n1);
	printf("Nota 2: %.1f\n", n2);
	printf("Media: %.1f\n", media);
	return 0;
}
