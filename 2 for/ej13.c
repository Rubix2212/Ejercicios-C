#include <stdio.h>
// se realiza un torneo de football en Buenos Aires y se leen los puntos
// de 5 equipos junto a su procedencia:
//  1- Caba
//  2- Buenos Aires
//  Identificar:
//  numero de equipo de mayor puntaje(numero de iteracion corresponde al numero de equipo)
//  numero de equipo de mayor puntaje de caba
//  numero de equipo de mayor puntaje de bsas
//  porcentaje de equipo caba y porcentaje equipo de bsas
//  promedio entre todos los equipos
//  porcentaje de los equipos que obtuvieron mas de 10 puntos

int i;
int n = 5;
int puntos;
int moreTen;
int maxTotalPoints, maxTotalPointsModifier;
int maxBsasPoints, maxBsasPointsModifier;
int maxCabaPoints, maxCabaPointsModifier;
int bsasEquipos, cabaEquipos;
int acumPoints;
int ciudad;

int Prints() {
  cabaEquipos = cabaEquipos * 100 / n;
  bsasEquipos = bsasEquipos * 100 / n;
  acumPoints = acumPoints / n;
  moreTen = moreTen * 100 / n;

  printf("\nNumero de equipo con mayor puntaje: %d", maxTotalPointsModifier);
  printf("\nNumero de equipo con mayor puntaje de Buenos Aires: %d", maxBsasPointsModifier);
  printf("\nNumero de equipo con mayor puntaje de CABA: %d", maxCabaPointsModifier);
  printf("\nPorcentaje de equipos de CABA: %d%%", cabaEquipos);
  printf("\nPorcentaje de equipos de Buenos Aires: %d%%", bsasEquipos);
  printf("\nPromedio de todos los equipos: %d", acumPoints);
  printf("\nPorcentaje de los equipos que hicieron mas de 10 puntos: %d%%", moreTen);
}

int Points() {
  //Error
  if(puntos < 0) {
    printf("Error! Ingrese puntos positivos!");
    return 0;
  }
  acumPoints += puntos;
  if(i == 0 || puntos > maxTotalPoints) {
    maxTotalPoints = puntos;
    maxTotalPointsModifier = i + 1;
  }
  if(puntos > 10) {
    moreTen++;
  }
  if(i == 0 || puntos > maxBsasPoints && ciudad == 1) {
    maxBsasPoints = puntos;
    maxBsasPointsModifier = i + 1;
  } else if(i == 0 || puntos > maxCabaPoints && ciudad == 2) {
    maxCabaPoints = puntos;
    maxCabaPointsModifier = i + 1;
  }
}

int City() {
  //Error
  if(ciudad != 1 && ciudad != 2) {
      printf("Error! Ingrese ciudad valida (1-BSAS, 2-CABA)");
      return 0;
    }
  if(ciudad == 1) {
    bsasEquipos++;
  } else {
    cabaEquipos++;
  }
}

int main() {
  for (i = 0; i < n; i++) {
    printf("\nIngrese ciudad del equipo (1-BSAS, 2-CABA): ",i + 1);
    scanf("%d", &ciudad);
    City();
    printf("\nIngrese puntos del equipo %d: ",i + 1);
    scanf("%d", &puntos);
    Points();
  }
  Prints();
}