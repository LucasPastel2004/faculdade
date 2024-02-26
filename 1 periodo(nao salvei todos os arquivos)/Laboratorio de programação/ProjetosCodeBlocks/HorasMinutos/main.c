#include <stdio.h>
int hrs;
int mins;
int totalMinutos;

const int MINUTOSnaHORA = 60;

char linhaTexto[50];

int main() {
	printf("Entre com Horas: ");
	fgets(linhaTexto, sizeof(linhaTexto), stdin);
	sscanf(linhaTexto, "%d", &hrs);

	printf("Entre com os minutos: ");
	fgets(linhaTexto, sizeof(linhaTexto), stdin);
	sscanf(linhaTexto, "%d", &mins);

	totalMinutos = mins + (hrs * MINUTOSnaHORA);

	printf("Total: %d minutos.\n", totalMinutos);

	return(0);
}
