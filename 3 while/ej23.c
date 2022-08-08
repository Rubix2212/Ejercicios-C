/*
  En una guardia se lee el valor de un indice de cada paciente junto con su edad. Puede ser q no hay pacientes y se atiende a un maximo de 5 personas.
  Finaliza la carga al ingresar 0 como indice
  Informar: 
    Indice maximo y su edad
    sumatoria entre todos los indices
    Porcentaje de los pacientes cuyo indice supero los 37
    porcemtaje de mayores de edad
    promedio del indice de los menores a 30 años
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX_PERSONAS 5

int index, j = 0;
int age;
int may37 = 0, may18 = 0, men30 = 0;
int prom = 0;
int maxIndex, maxIndexAge, indexMen30;

int main() {
  system("cls");
  printf("Ingrese indice: ");
  scanf("%d", &index);
  while (index != 0 && j != MAX_PERSONAS) {
    prom += index;
    printf("Ingrese edad: ");
    scanf("%d", &age);
    if (age >= 18) may18++;
    if (j == 0 || index > maxIndex) {
      maxIndex = index;
      maxIndexAge = age;
    }
    if (index > 37) may37++;
    else if (age < 30) {
      indexMen30 = index;
      men30++;
    }
    printf("Ingrese indice: ");
    scanf("%d", &index);
    j++;
  }
  system("cls");
  printf("Indice maximo: %d \t\t\t Edad: %d\n", maxIndex, maxIndexAge);
  printf("Sumatoria entre todos los indices: %d\n", prom);
  printf("Porcentaje de los pacientes cuyo indice supero los 37: %d%%\n", (may37 * 100) / j);
  printf("Porcemtaje de mayores de edad:%d%%\n", (may18 * 100) / j);
  printf("Promedio del indice de los menores a 30 años: %d\n", indexMen30 / men30);
}