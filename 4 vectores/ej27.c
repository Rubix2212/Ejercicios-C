/*
  Se almacena en un vector el tiempo en pantalla de una persona expresado en minutos a lo largo de 7 dias.
  Indicar:
    Dias en los cuales el usario supero la hora
    Promedio de tiempo por dia
    Porcentaje de los dias en los cuales transcurrio menos de 3hs en pantalla
    Dia en el que paso mayor cantidad de tiempo frente a la pantalla
    
  La posicion de memoria corresponde al numero de dia
*/
#include <stdio.h>
#include <stdlib.h>
#define DIAS 7

float tiempo[DIAS];
int supero_hora[7];
float prom = 0;
int i;
int menor_3hs = 0;
float max_tiempo;
float max_tiempo_dia;

int main() {
  for (i = 0; i < DIAS; i++) {
    system("cls");
    printf("DIA %d\n\n", i + 1);
    printf("Ingrese el tiempo en pantalla: ");
    scanf("%f", &tiempo[i]);
    prom += tiempo[i];
  }
  prom /= DIAS;
  printf("Dias en los que supero la hora: ");
  for (i = 0; i < DIAS; i++) {
    if (tiempo[i] >= 60) printf("%d ", i + 1);
    if (tiempo[i] < 180) menor_3hs++;
    if (i == 0 || tiempo[i] > max_tiempo) {
      max_tiempo = tiempo[i];
      max_tiempo_dia = i + 1;
    }
  }
  
  printf("\nPromedio por dia: %.2fm", prom);
  printf("\nPorcentaje de los dias en los cuales transcurrio menos de 3hs en pantalla: %d%%", (menor_3hs * 100) / DIAS);
}