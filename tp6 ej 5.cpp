#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* unir_cadenas(const char* cadena1, const char* cadena2) {
	int longitud_cadena1 = strlen(cadena1);
	int longitud_cadena2 = strlen(cadena2);
	int longitud_total = longitud_cadena1 + longitud_cadena2;
	
	char* union_cadenas = (char*)malloc((longitud_total + 1) * sizeof(char));
	
	if (union_cadenas == NULL) {
		printf("Error: No se pudo reservar memoria para la cadena resultante.\n");
		exit(1);
	}
	
	strcpy(union_cadenas, cadena1);
	strcat(union_cadenas, cadena2);
	
	return union_cadenas;
}

int main() {
	char cadena1[100], cadena2[100];
	
	printf("Ingrese la primera cadena: ");
	scanf("%s", cadena1);
	
	printf("Ingrese la segunda cadena: ");
	scanf("%s", cadena2);
	
	char* cadena_union = unir_cadenas(cadena1, cadena2);
	
	printf("La cadena resultante de la unión es: %s\n", cadena_union);
	
	free(cadena_union);
	
	return 0;
}
