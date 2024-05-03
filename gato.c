#include <stdio.h>

typedef struct Casilla Casilla;
typedef struct Jugador Jugador;
struct Casilla {
	int x;
	int y;
	char valor;
};

struct Jugador {
	char simbolo;
	char nombre[50];
	struct Casilla casillas[5];
};

struct Juego {
	Jugador jugadores[2];
	int turno;
	int seguir;
};

char obtenerValorEnCasilla(char valor) {
	if(valor == 0) {
		return ' ';
	}
	else {
		return valor;
	}
}

void mostrarTablero(Casilla tablero[3][3], int tamano) {
	printf("\n       |       |");
	printf("\n   %c   |   %c   |  %c", obtenerValorEnCasilla(tablero[0,0]->valor), obtenerValorEnCasilla(tablero[1,0]->valor), obtenerValorEnCasilla(tablero[2,0]->valor));
	printf("\n  (1,1)|  (2,1)| (3,1)");
	printf("\n----------------------");
	printf("\n       |       |");
	printf("\n   %c   |   %c   |  %c", obtenerValorEnCasilla(tablero[0,1]->valor), obtenerValorEnCasilla(tablero[1,1]->valor), obtenerValorEnCasilla(tablero[2,1]->valor));
	printf("\n  (1,2)|  (2,2)| (3,2)");
	printf("\n-----------------------");
	printf("\n       |       |");
	printf("\n   %c   |   %c   |  %c", obtenerValorEnCasilla(tablero[0,2]->valor), obtenerValorEnCasilla(tablero[1,2]->valor), obtenerValorEnCasilla(tablero[2,2]->valor));
	printf("\n  (1,3)|  (2,3)|  (3,3)");
	printf("\n");
}

void siguienteTurno(struct Juego juego) {

}



int main() {
	char aux[50];
	char simbaux;
	
	printf("Datos del jugador 1 (x): ");
	scanf("\n%s", aux);
	fflush(stdin);
	printf("Simbolo (x): ");
	scanf("\n%c", &simbaux);
	fflush(stdin);
	Jugador jugador1 = {simbaux, aux, {0}};
	
	printf("Datos del jugador 2 (O): ");
	scanf("\n%s", aux);
	fflush(stdin);
	printf("Simbolo (o): ");	
	scanf("\n%c", &simbaux);
	fflush(stdin);
	Jugador jugador2 = {simbaux, aux, {0}};

	struct Juego juego = {{jugador1, jugador2}, 0, 1};
	Casilla tablero[3][3];
	
	while(juego.seguir) {
		mostrarTablero(tablero, 3);
		printf("Turno de %s", juego.jugadores[juego.turno % 2].nombre);
		if((juego.turno % 2) == 0) {
			scanf("%c", aux);
		}
	}
	
	return 0;
}
