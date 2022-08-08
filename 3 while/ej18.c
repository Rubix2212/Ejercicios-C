// Un micro realiza un citytour y tiene 10 paradas. 
// Solo se detiene si en la parada hay personas.
// en cada parada, se cargan la cantidad de pasajeros y si el grupo pertenece a turistas extrangeros
// o locales. El usario indica el fin de la carga ingresando 0 como numero de pasajero
// Informar:
// Total de pasajeros
// Porcentaje de los grupos extranjeros
// Porcentaje de turistas locales
// Cantidad maxima de pasajeros que subieron en una parada.
// Cantidad maxima de pasajeros locales


#include <stdio.h>

int i = 0;
int pasajeros;
int n = 10;
int turistas;
int total = 0;
int locales = 0, extranjeros = 0;
int maxPas, maxLoc;
int acum = 0;

int Pasajeros() {
  if(i == 0 || pasajeros > maxPas) {
    maxPas = pasajeros;
  }
}

int Turistas() {
  if(turistas == 1) {
    extranjeros++;
  } else if(turistas == 2) {
    locales++;
  } else {
    printf("Error! Ingrese numero valido");
    return 0;
  }
  if(i == 0 || locales > maxLoc && turistas == 2) {
    maxLoc = locales;
  }
}

int Operations() {
  if(acum != 0) {
  locales = locales * 100 / acum;
  extranjeros = extranjeros * 100 / acum;
  } 
  printf("\nTotal de pasajeros: %d", total);
  printf("\nPorcentaje de turistas locales %d%% y extranjeros %d%%", locales, extranjeros);
  printf("\nCantidad maxima de pasajeros: %d", maxPas);
  printf("\nCantidad maxima de pasajeros locales: %d", maxLoc);
}

int main() {
  printf("\nIngrese cantidad de pasajeros en la parada %d: ", i + 1);
  scanf("%d", &pasajeros);
  while (pasajeros != 0 && i < n) {
    total += pasajeros;
    Pasajeros();
    printf("Ingrese 1-Es grupo extranjero 2-Es grupo local:");
    scanf("%d", &turistas);
    Turistas();
    i++;
    if(i != 10) {
    printf("\nIngrese cantidad de pasajeros en la parada %d: ", i + 1);
    scanf("%d", &pasajeros);
    }
  }
  Operations();
  return 0;
}