/*
  Se desea realizar un programa para procesar las notas de un estudiante universitario
  Se lee la cantidad de materias y se ingresan las notas finales obtenidas. El programa finaliza
  al haber aprobado todas las materias.
  Informar:
    Promedio con y sin aplazos
    Porcentaje de materias recursadas
    Nota maxima entre las aprobadas
    En que porcentaje de las materias recursadas obtuvo nota mayor o igual a 3
    Informar si promocio alguna materia(nota >= 8). En caso afirmativo informar el promedio de las materias
    
*/
#include <stdio.h>
#include <stdlib.h>

float nota;
float prom = 0;
float notaMax = 0;
int cantNotas;
int i = 0; 
int promCont = 0; 
int recurso = 0;
int may3 = 0;
int promocionadas = 0;


int main() {
  system("cls");
  printf("Ingrese cantidad de materias: ");
  scanf("%d", &cantNotas);
  while (i < cantNotas) {
    system("cls");
    printf("\t\t\tMATERIA %d\n", i + 1);
    printf("Ingrese nota: ");
    scanf("%f", &nota);
    prom += nota;
    promCont++;
    if (nota < 4) recurso++;
    else if (nota >= 4) {
      if (notaMax == 0 || nota > notaMax) {
        notaMax = nota;
      }
    }
    if (nota >= 8) promocionadas++;
    while (nota < 4) {
      system("cls");
      printf("\t\t\tDESAPROBO\n");
      printf("Ingrese nota recuperatoria: ");
      scanf("%f", &nota);
      if (nota >= 3) may3++;
      prom += nota;
      promCont++;
    }
    i++;
  }
  system("cls");
  printf("\t\t\tRESULTADOS\n");
  printf("Promedio con y sin aplazos: %.2f\n", prom / promCont);
  printf("Nota maxima entre las aprobadas: %.2f\n", notaMax);
  printf("Porcentaje de materias recursadas que se obtuvo una nota mayor o igual a 3: %d%%", recurso * 100 / promCont);
}