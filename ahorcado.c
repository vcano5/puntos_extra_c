#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void dibujar(int errores) {};

char* obtener_aleatorio(int categoria) {
	int ind_rand = (rand() % 5) + 1;
	static char salida[] = 10;
	printf("\n%i", ind_rand);
	switch(categoria) {
		case 1: // Nombres
			char datos[10][10] = {"Andres", "Sofia", "Mateo", "Ana","Lucia", "Hugo", "Ian", "Carmen", "Manuel", "Maria"};
			salida = datos[ind_rand]; 
			return salida;
			break;
		case 2: // Colores
			char datos[10][10] = {"Rojo", "Verde", "Amarillo", "Negro", "Azul", "Rosa", "Morado", "Cafe", "Blanco", "Turquesa"}; 
			return datos[ind_rand];
			break;
		case 3: // Paises
			char datos[10][10] = {"Mexico", "Francia", "Peru", "Argentina", "Chile", "Colombia", "China", "Bolivia", "Venezuela", "Brasil"}; 
			return datos[ind_rand];
			break;
		case 4: // Utiles escolares
			char datos[10][10] = {"Calculadora", "Lapiz", "Pluma", "Cuaderno", "Pegamento", "Mochila", "Tijeras", "Colores", "Grapadora", "Libro"}; 
			return datos[ind_rand];
			break;
		case 5: // Animales
			char datos[10][10] = {"Perro", "Gato", "Pez", "Leon", "Elefante", "Caracol", "Tortuga", "Tiburon", "Jirafa", "Tucan"}; 
			return datos[ind_rand];
			break;
		default:
			return obtener_aleatorio(ind_rand); //  recursividad
	}
}

int main() {
	srand(time(NULL));
	char* nombre_obtenido = obtener_aleatorio(0);
	printf("%s", nombre_obtenido);
	while(1) {
		int numero;
		printf("Numero: ");
		scanf(" %d", &numero);
		dibujar(numero);
	}
	return 0;
}

void dibujar(int errores) {
	switch(errores) {
		case 0:
			printf("\n+---+");
			printf("\n|   |");
			printf("\n    |");
			printf("\n    |");
			printf("\n    |");
			printf("\n    |");
			printf("\n======");
			break;
		case 1:
			printf("\n +---+");
			printf("\n |   |");
			printf("\n 0   |");
			printf("\n     |");
			printf("\n     |");
			printf("\n     |");
			printf("\n ======");
			break;
		case 2:
			printf("\n +---+");
			printf("\n |   |");
			printf("\n 0   |");
			printf("\n |   |");
			printf("\n     |");
			printf("\n     |");
			printf("\n ======");
			break;
		case 3:
			printf("\n +---+");
			printf("\n |   |");
			printf("\n 0   |");
			printf("\n/|   |");
			printf("\n     |");
			printf("\n     |");
			printf("\n======");
			break;
		case 4:
			printf("\n +---+");
			printf("\n |   |");
			printf("\n 0   |");
			printf("\n/|\\   |");
			printf("\n     |");
			printf("     |");
			printf("======");
			break;
		case 5:
			printf(" +---+");
			printf(" |   |");
			printf(" 0   |");
			printf("/|\\   |");
			printf("/    |");
			printf("     |");
			printf("======");
			break;
		case 6:
			printf(" +---+");
			printf(" |   |");
			printf(" x   |");
			printf("/|\\   |");
			printf("/ \\   |");
			printf("     |");
			printf("======");
			break;
	}
}