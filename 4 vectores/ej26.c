/*
  Se procesan los tiempos de 5 nadadores. La posicion de mem corresponde al numero de posicion
  Informar:
    Competidor ganador(menor tiempo)
    Competidores que realizaron un tiempo menor al promedio
    Porcentaje de competidores que llegaron a la meta con un tiempo < 200
    Indicar si algun competidor realizo un tiempo > 500
*/
#include <stdio.h>
#include <stdlib.h>
#define LONGITUD 5

float tiempo[LONGITUD];
int ganador, tiempo_ganador;
int prom = 0;
int tiempo_200 = 0;
int i;

int main() {
  for (i = 0; i < LONGITUD; i++) {
    printf("Ingrese el tiempo del competidor n%d: ", i + 1);
    scanf("%f", &tiempo[i]);
    prom += tiempo[i];
  }

  prom /= i;
  for (i = 0; i < LONGITUD; i++) {
    if (i == 0 || tiempo[i] < ganador) {
      ganador = i;
      tiempo_ganador = tiempo[i];
    }
    if (tiempo[i] < prom) {
      printf("El competidor %d realizo un tiempo menor al promedio.\n", i + 1);
    }
    if (tiempo[i] < 200) {
      tiempo_200++;
    } else if (tiempo[i] > 500) {
      printf("El competidor %d realizo un tiempo mayor a 500s\n", i + 1);
    }
  }
  system("pause");
  system("cls");
  printf("El competidor ganador es el %d\n", ganador + 1);
}