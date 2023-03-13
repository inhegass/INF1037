//Aluno: João Vitor Figueiredo Villa
//Matrícula: 2212585

#include <stdio.h>

float MediaAluno(float x, float y) {
	float media;
	media = (x * 3.0 + y * 7.0) / 10.0;
	return media;
}

int main(void) {
	float n1, n2, media;
	printf("Qual a primeira nota?\n");
	scanf("%f", &n1);
	printf("Qual a segunda nota?\n");
	scanf("%f", &n2);
	float media = MediaAluno(n1, n2);
	printf("A media do aluno seria %.1f\n", media);
	return 0;
}
