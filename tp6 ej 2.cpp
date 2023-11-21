#include <stdio.h>
#include <math.h>

void calcular_raices_ecuacion_cuadratica(double A, double B, double C, double* raiz1, double* raiz2) {
	double discriminante = B * B - 4 * A * C;
	
	if (discriminante >= 0) {
		*raiz1 = (-B + sqrt(discriminante)) / (2 * A);
		*raiz2 = (-B - sqrt(discriminante)) / (2 * A);
	} else {
		*raiz1 = *raiz2 = 0.0; 
	}
}

int main() {
	double A, B, C, raiz1, raiz2;
	
	printf("Ingrese el valor de A: ");
	scanf("%lf", &A);
	
	printf("Ingrese el valor de B: ");
	scanf("%lf", &B);
	
	printf("Ingrese el valor de C: ");
	scanf("%lf", &C);
	
	calcular_raices_ecuacion_cuadratica(A, B, C, &raiz1, &raiz2);
	
	printf("Las ra�ces de la ecuaci�n cuadr�tica son:\n");
	printf("Ra�z 1: %lf\n", raiz1);
	printf("Ra�z 2: %lf\n", raiz2);
	
	return 0;
}
