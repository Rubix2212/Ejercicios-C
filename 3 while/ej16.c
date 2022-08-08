// realizar un programa para procesar un programa que procese las notas de un alumno. El alumno rinde examen hasta aprobar el contenido (al menos rinde un examen)
// informar:
// nota minima y maxima alcanzada
// cuantas veces rindio el examen el alumno
// promedio obtenido 

// modificar el programa anterior :V para que el estudiante pueda rendir hasta aprobar el examan o hasta alcanzar las diez evaluaciones :V
//


#include <stdio.h>

int nota;
int i = 0;
int acum = 0;
int min, max;

int Ifs() {
	if(i == 0 || nota < min) {
		min = nota;
	}
	if(i == 0 || nota > max) {
		max = nota;
	}
}

int main() {
	do {
		printf("Ingrese nota %d: ", i + 1);
		scanf("%d", &nota);
		if(nota < 0 || nota > 10) {
			printf("Error! Ingrese nota valida (1-10)");
			return 0;
		}
		acum += nota;
		Ifs();
		i++;
	} while(nota < 6 && i < 10);
	acum = acum / i;
	printf("\nNota minima: %d", min);
	printf("\nNota maxima: %d", max);
	printf("\nVeces que se rindio el examen: %d", i);
	printf("\nPromedio obtenido: %d", acum);
}
