// se realiza un censo en una comuna con n habitantes
// indicar: porcentaje de menores de 18 a�os
// de mayores a 18 y menores a 45
// de mayores de 45 inclusive

// informar:
//  edad maxima en cada rango
//  mostrar porcentaje de la poblacion del genero femenino, masculino y no binario
//  y sus edades minimas

#include <stdio.h>

int habitantes, edad, i, genero, edad_max, edad_min;
int acum = 0, men18 = 0, may18 = 0, may45 = 0;
int hombres = 0, mujeres = 0, no_binario = 0;

void operations() {
	// porcentajes
	// Generos
	hombres = hombres * 100 / habitantes;
	mujeres = mujeres * 100 / habitantes;
	no_binario = no_binario * 100 / habitantes;
	// edades
	men18 = men18 * 100 / habitantes;
	may18 = may18 * 100 / habitantes;
	may45 = may45 * 100 / habitantes;
}

void prints() {
	// Edad maxima en cada rango
	printf("\nEdad maxima: %d", edad_max);
	printf("\nEdad minima: %d", edad_min);

	printf("\nPorcentajes de edades:");
	printf("\nMenores de 18 anios: %d", men18);
	printf("%c", 37);
	printf("\nMayores de 18 anios: %d");

	printf("\nMayores de 44 anios: %d", may45);
	printf("%c", 37);

	printf("\n\nGeneros: \n	Hombres: %d", hombres);
	printf("%c", 37);
	printf("\n	Mujeres: %d", mujeres);
	printf("%c", 37);
	printf("\n	No binarios: %d", no_binario);
	printf("%c", 37);
}

void ifs() {
	if (edad < 18) {
			men18++;
	}
	if (edad >= 18 && edad < 45) {
			may18++;
	}
	if (edad >= 45) {
			may45++;
	}
	if (i == 0 || edad > edad_max) {
			edad_max = edad;
	}
	if (i == 0 || edad < edad_min) {
			edad_min = edad;
	}
	if (genero == 1) {
			hombres++;
	}
	if (genero == 2) {
			mujeres++;
	}
	if (genero == 3) {
			no_binario++;
	}
}

main() {
	printf("Ingrese numero de habitantes: ");
	scanf("%d", &habitantes);
	for (i = 0; i < habitantes; i++) {
		printf("Ingrese edad: ");
		scanf("%d", &edad);
		printf("Ingrese 1-Hombre, 2-Mujer y 3-No Binario : ");
		scanf("%d", &genero);
		ifs();
	}

}


