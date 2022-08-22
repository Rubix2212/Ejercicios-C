/*
se procesan los datos de 10 pacientes. 
se almacenan sus numeros de afiliados en un vector y su indice glusemico en otro.
  INDICAR:
    porcentaje de pacientes con un indice menor a 150 mg/dL
    promedio entre todos los pacientes
    numeros de afiliados que superan los 200 mg/dL
    las posiciones de memoria de los pacientes con menos de 60 mg/dL
    indice maximo y minimo leido y a que numero de afiliado pertenece
    validar numeros de afiliados conociendo que pueden ir desde el 0 hasta el 5000
*/
#include <stdio.h>
#include <stdlib.h>
#define CANT_DATOS 5

int main() {
  int i;
  int num_afiliado[CANT_DATOS];
  float index_glusemico[CANT_DATOS];
  int percentage_glucemia;
  float prom = 0;
  float index_max, index_min;
  int index_max_n, index_min_n;
  for (i = 0; i < CANT_DATOS; i++) {
    system("cls");
    printf("\t\tPACIENTE %d\n", i + 1);
    printf("Ingrese numero de afiliado: ");
    scanf("%d", &num_afiliado[i]);
    while (num_afiliado[i] < 0 || num_afiliado[i] > 5000) {
      printf("\t\tERROR!\n");
      printf("Ingrese un numero de afiliado valido: ");
      scanf("%d", &num_afiliado[i]);
    }
    printf("Ingrese indice glucemico: ");
    scanf("%f", &index_glusemico[i]);
  }
  for (i = 0; i < CANT_DATOS; i++) {
    system("cls");
    printf("\t\tRESULTADOS\n");
    if (index_glusemico[i] < 150) percentage_glucemia++;
    prom += index_glusemico[i];
    if (index_glusemico[i] > 200) printf("El paciente con el indice %d supero los 200mg/dl\n", index_glusemico[i]);
    if (index_glusemico[i] < 60) printf("Posicion de mem de paciente con menos de 60mg/dl: %d\n", i);
    if (i == 0 || index_glusemico[i] > index_max) {
      index_max = index_glusemico[i];
      index_max_n = num_afiliado[i];
    }
    if (i == 0 || index_glusemico[i] < index_min) {
      index_min = index_glusemico[i];
      index_min_n = num_afiliado[i];
    }
  }
  printf("Porcentaje de los pacientes con un indice menor a 150mg/dl: %d%%\n", (percentage_glucemia * 100) / CANT_DATOS);
  printf("Promedio entre los pacientes: %.2f\n", prom / CANT_DATOS);
  printf("Indice maximo: %.2f\tPosicion de mem: %d\n", index_max, index_max_n);
  printf("Indice minimo: %.2f\tPosicion de mem: %d\n", index_min, index_min_n);
}