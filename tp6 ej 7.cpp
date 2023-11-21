#include <stdio.h>

void producto_matrices(const float matriz1[3][3], const float matriz2[3][3], float resultado[3][3]) {
	int i, j, k;
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			resultado[i][j] = 0;
			for (k = 0; k < 3; k++) {
				resultado[i][j] += matriz1[i][k] * matriz2[k][j];
			}
		}
	}
}

int main() {
	float matriz1[3][3], matriz2[3][3], resultado[3][3];
	int i, j;
	
	printf("Ingrese los elementos de la primera matriz de 3x3:\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("Ingrese el elemento [%d][%d]: ", i, j);
			scanf("%f", &matriz1[i][j]);
		}
	}
	
	printf("Ingrese los elementos de la segunda matriz de 3x3:\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("Ingrese el elemento [%d][%d]: ", i, j);
			scanf("%f", &matriz2[i][j]);
		}
	}
	
	producto_matrices(matriz1, matriz2, resultado);
	
	printf("El producto de las dos matrices es:\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%.2f\t", resultado[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
