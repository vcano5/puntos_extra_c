#include <stdio.h>
#include <time.h>
#include <string.h>


struct Usuario {
	char nombre[50];
	char contrasena[50];
	int intentos_fallidos;
};



void login(struct Usuario usuario);
void registro(char datos[2][50], struct Usuario usuario);

int main() {
	// Registro de usuario
	char entrada[2][50];
	char entrada_aux[50];
	struct Usuario usuario;
	registro(entrada, usuario);
	while(usuario.intentos_fallidos <= 3) {
		int sesion = 0;
		while(sesion == 0) {
			login(usuario);
		}
	}
	return 0;
}

int registro(char datos[2][], struct Usuario usuario) {
	char aux[50];
	printf("---- Registro de nuevo usuario -----");
	printf("\nUsuario: ");
	
	scanf("%c", entrada[0]);
	pedir_contrasena: printf("\nContraseña: ");
	scanf("%c", entrada[1]);
	printf("\nRepita contrase%ca", 164);
	scanf(entrada_aux);
	if(strcmp(entrada[1], entrada_aux)) {
		printf("\nRegistro completado correctamente.");
		usuario = {entrada[0];, entrada[1], 0}
		return 1;
	}
	else {
		printf("\nLa contrase%ca es incorrecta. Favor de introducir nuevamente.");
		goto pedir_contrasena;
	}
	return 1;
}

int login(struct Usuario usuario) {
	char entradas[2][50];
	printf("\nUsuario: ");
	scanf("%c", entradas[0]);
	printf("\nContrase%ca: ", 164);
	scanf("%c", entradas[1]);
	if(!strcmp(entradas[0], usuario.nombre)) {
		printf("Usuario incorrecto.");
		return 0;
	}
	else {
		if(!strcmp(entradas[1], usuario.contrasena)) {
			usuario.intentos_fallidos += 1;
			printf("\nContrase%ca incorrecta. %i intentos incorrectos", 164, usuario.intentos_fallidos);
			return 0;
		}
		else {
			usuario.intentos_fallidos = 0;
			printf("Bienvenido %s. Ultimo inicio de sesi%cn: hoy", usuario.nombre, 243);
			return 1;
		}
	} 
}