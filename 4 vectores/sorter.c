#include <stdio.h>

int main() {
  int vector[] = {8, 10, 7, 54, 6};
  int n = 5;
  int aux;

  for (int j = 1; j < n; j++) {
    for (int i = 0; i < (n - 1); i++) {
      if (vector[i] > vector[i + 1]) {
        aux = vector[i];
        vector[i] = vector[i + 1];
        vector[i + 1] = aux; 
      }
    }
  }
  for (int k = 0; k < n; k++) {
    printf("%d:%d \n", k, vector[k]);
  } 
}