#include <stdio.h>

int main(void) {
	int temperatura = 25;
	float temperaturaF = ((temperatura * 9) / 5) + 32;
	printf("Temperatura: %d graus\nFahrenheit: %.1f graus\n ", temperatura, temperaturaF);
	return 0;
}
