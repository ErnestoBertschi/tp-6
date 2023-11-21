#include <stdio.h>

int contar_letra_en_cadena(char letra, const char* cadena) {
	int contador = 0;
	int i = 0;
	
	while (cadena[i] != '\0') {
		if (cadena[i] == letra) {
			contador++;
		}
		i++;
	}
	
	return contador;
}

int main() {
	char letra;
	char cadena[100];
	
	printf("Ingrese una letra: ");
	scanf(" %c", &letra);
	
	printf("Ingrese una cadena de caracteres: ");
	scanf("%s", cadena);
	
	int cantidad = contar_letra_en_cadena(letra, cadena);
	
	printf("La letra '%c' aparece %d veces en la cadena.\n", letra, cantidad);
	
	return 0;
}
