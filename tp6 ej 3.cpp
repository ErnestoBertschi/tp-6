#include <stdio.h>

void intercambiar_valores(int* x1, int* x2) {
	int temp = *x1;
	*x1 = *x2;
	*x2 = temp;
}

int main() {
	int x1, x2;
	
	printf("Ingrese el valor de X1: ");
	scanf("%d", &x1);
	
	printf("Ingrese el valor de X2: ");
	scanf("%d", &x2);
	
	printf("Valores antes del intercambio: X1 = %d, X2 = %d\n", x1, x2);
	
	intercambiar_valores(&x1, &x2);
	
	printf("Valores después del intercambio: X1 = %d, X2 = %d\n", x1, x2);
	
	return 0;
}
