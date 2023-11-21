#include <stdio.h>

float calcular_determinante(float matriz[3][3]) {
	float det = 0;
	
	det = matriz[0][0] * (matriz[1][1] * matriz[2][2] - matriz[1][2] * matriz[2][1]) -
		matriz[0][1] * (matriz[1][0] * matriz[2][2] - matriz[1][2] * matriz[2][0]) +
			matriz[0][2] * (matriz[1][0] * matriz[2][1] - matriz[1][1] * matriz[2][0]);
			
			return det;
}

int main() {
	float matriz[3][3];
	int i, j;
	
	printf("Ingrese los elementos de la matriz de 3x3:\n");
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("Ingrese el elemento [%d][%d]: ", i, j);
			scanf("%f", &matriz[i][j]);
		}
	}
	
	float determinante = calcular_determinante(matriz);
	
	printf("El determinante de la matriz es: %.2f\n", determinante);
	
	return 0;
}
