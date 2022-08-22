/*
  Se almacena la ganancia de un negocio en 5 dias habiles. Se leen los ingresos
  y los egresos cada dia y se almacena el resultado en un vector!
  Mostrar:
    ++Total de ingresos
    ++El vector resultante
    ++Que dia mayor hubo ganacias
    ++Dia en que la ganancia supero al promedio
    Porcentaje de los dias en los cuales la ganancia supero los 2000 pesos
*/
#include <stdio.h>
#include <stdlib.h>
#define DIAS 5

int main() {
  int i;
  float ganancias[DIAS];
  float prom = 0;
  float max_gan;
  for (i = 0; i < DIAS; i++) {
    printf("Ingrese ganancias del dia %d: ", i + 1);
    scanf("%.2f", &ganancias[i]);
    prom += ganancias[i];
    if (i == 0 || ganancias[i] > max_gan) {
      max_gan = ganancias[i];
    }
  }
  float total = prom;
  prom /= i;
  printf("\nTotal: %2.f", total);
  for (i = 0; i < DIAS; i++) {
    printf("\nVector resultante");
    printf("%.2f ", ganancias[i]);
  }
  int ganancias200 = 0;
  for (i = 0; i < DIAS; i++) {
    if (ganancias[i] > prom) {
      printf("El dia %d supero al promedio", i + 1);
    }
    if (ganancias[i] > 200) {
      ganancias200++;
    }
  }
  printf("Porcentaj de los dias en los cuales supero los $200: %d%%", (ganancias200 * 100) / DIAS);
}