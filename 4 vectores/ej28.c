/*
  Se almacena en un vector los gastos de un inmueble durante un semestre(6 meses) 
  de suministro electricos.
  Informar:
    ++Porcentaje de los meses en los que el gasto supero los 1500 pesos
    ++Total gastado en el semestre
    ++Numero de mes en el que mas se gasto
    --Expresar en porcentajes cuando represento el gasto de cada mes en relacion al total
    ++Imprimir el vector ordenado de mayor a menor
*/
#include <stdio.h>
#define MESES 6

int main() {
  float gastos[MESES];
  int i;
  int max_gasto_i, max_gasto;
  float total = 0;
  for (i = 0; i < MESES; i++) {
    printf("Ingrese gasto para el mes %d: $", i);
    scanf("%f", &gastos[i]);
    total += gastos[i];
  }
  int gasto_supero = 0;
  int porcentaje[MESES];
  for (i = 0; i < MESES; i++) {
    if (gastos[i] > 1500) {
      gasto_supero++;
    }
    total += gastos[i];
    if (i == 0 || gastos[i] > max_gasto) {
      max_gasto = gastos[i];
      max_gasto_i = i;
    }
  }
  printf("\n\t\tPorcentajes\n");
  for (i = 0; i < MESES; i++) { 
    printf("Porcentaje Mes %d: %.2f\n", i, ((gastos[i] * 100) / total) * 2);
  }
  printf("\nPorcentaje de los meses en el que el gasto supero los 1500 pesos: %d%%", (gasto_supero * 100) / MESES);
  printf("\nTotal gastado en el semestre: $%.2f", total);
  printf("\nMes en donde se gasto mas: %d", max_gasto_i + 1);
  //sorter
  int j, k;
  int aux;
  for (j = 1; j < MESES; j++) {
    for (i = 0; i < (MESES - 1); i++) {
      if (gastos[i] > gastos[i + 1]) {
        aux = gastos[i];
        gastos[i] = gastos[i + 1];
        gastos[i + 1] = aux;
      }
    }
  }
  printf("\n\n");

  for (i = 0; i < MESES; i++) {
    printf("Mes %d: %.2f\n", i, gastos[i]);
  }
}