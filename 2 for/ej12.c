// se leen las notas de n alumnos en algoritmos. Se ingresa, junto con cada nota 
// la division a la que corresponde el estudiante (numeros del 1 al 4), informar:
// porcentaje de desaprobados, promedio de aprobados,
// nota maxima y minimas alcanzadas
// cantidad de alumnos de 4°1°, porcentaje de alumnos de 4°2°,
// promedio de los alumnos de 4°3°, porcentaje de aprobados de 4°4

#include <stdio.h>

int n;
int i;
int nota;
int curso;
int primero;
int segundo;
int tercero;
int cuarto;
int aprobrados, desaprobados;
int maxNota, minNota;

void end() {
  segundo = segundo * 100 / n;
  tercero = tercero / n;
  cuarto = cuarto * 100 / n;
  printf("\nCantidad de alumnos de 4 1: %d", primero);
  printf("\nPorcentaje de alumnos de 4 2: %d%%", segundo);
  printf("\nPromedio de los alumnos de 4 3: %d", tercero);
  printf("\nPorcentaje 4 4: %d", cuarto);
}

void curse() {
  if(curso == 1) {
      primero++;
  } else if(curso == 2) {
      segundo++;
  } else if(curso == 3) {
      tercero++;
  } else if(curso == 4) {
      cuarto++;
  } else {
      printf("Ingrese curso valido");
  }
  if(nota >= 6 && nota <= 10) {
      aprobrados++;
  } else if(nota >= 1 && nota <= 5) {
      desaprobados++;
  } else {
      printf("Error! Ingrese nota valida\n");
  }
  if(i == 0 || nota > maxNota) {
      maxNota = nota;
  }
  if(i == 0 || nota < minNota) {
      minNota = nota;
  }
}

int main() {
  printf("Ingrese cantidad de alumnos de algoritmo: ");
  scanf("%d", &n);
  for(i = 0; i < n; i++) {
    printf("Ingrese nota de alumno %d: ", i + 1);
    scanf("%d", &nota);
    printf("Curso del alumno: ");
    scanf("%d", &curso);
    curse();
    end();
  }
} 