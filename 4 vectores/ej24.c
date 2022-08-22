/*
  Imprimir todas las posiciones del vector
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  int i = 0, j = 0;	
  int posiciones = 5;
  int vector[posiciones]; 

  while (i < posiciones) {
    printf("Ingrese posicion %d del vector: ", i);
    scanf("%d", &vector[i]);
    i++;
  }
  
  while (j < 5) {
    printf(" %d |", vector[j]);
    j++;
  }
  
  printf("\n");
  printf(" 0 | 1 | 2 | 3 | 4 |");
}