#include <stdio.h>

int main(void) {
	int dias;
	printf("Qual o numero de dia(s)?\n");
	scanf_s("%d", &dias);
	int semanas = dias / 7;
	int d = dias - semanas * 7;
	printf("Sao %d semana(s) e %d dia(s).\n", semanas, d);
	return 0;
}
