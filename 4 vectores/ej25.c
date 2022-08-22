/*
  Se almacenan las notas de un alumno en 5 materias 
  Mostrar:
    Promedio
    Notas menores al promedio
    Posiciones de memoria de las materias aprobadas
    Porcentaje de las desaprobadas
    Nota minima y posicion de memoria
*/
#include <stdio.h>
#include <stdlib.h>
#define LONGITUD 5

int i = 0;
float nota[5];
float prom = 0;
int desaprobadas = 0;
float nota_min = 0;
int pos_min;

int main() {
  while (i < 5) {
    printf("Ingrese nota de la materia %d: ", i);
    scanf("%f", &nota[i]);
    prom += nota[i];
    if (nota_min == 0 || nota[i] < nota_min) {
      nota_min = nota[i];
      pos_min = i;
    }
    i++;1
  }

  i = 0;
  prom /= i;
  while (i < 5) {
    if (nota[i] < 6) {
      desaprobadas++;
    } else if (nota[i] >= 6) {
      printf("Aprobo, la posicion de memoria es la: %d\n", i);
    }
    if (nota[i] < prom) {
      printf("Nota menor al promedio: %.2f\n", nota[i]);
    }
    i++;
  }
  system("pause");
  system("cls");
  printf("Porcentaje de materias desaprobadas: %d%%", (desaprobadas * 100) / 5);
  printf("\nNota minima: %.2f\t Posicion de memoria: %d", nota_min, pos_min);
}