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

int i = 0,
j = 0,
cantNota = 0,
nota,
acumNota = 0,
aprobados = 0,
matRecurs = 0,
notaMax = 0,
mayEqual3 = 0,
promocionadas = 0;

void operaciones() {
  int prom = acumNota / i;
  int porcMatRecurs = matRecurs * 100 / i;
  mayEqual3 *= 100 / matRecurs;
  int promPromocionadas = promocionadas / i;
  system("cls");
  printf("\n\t\t\tMaterias:");
  printf("\nPormedio de notas con y sin aplazos: %d", prom);
  printf("\nPorcentaje de materias recursadas: %d%%", porcMatRecurs);
  printf("\nNota maxima entre las aprobadas: %d", notaMax);
  printf("\nPorcentaje de las materias recursadas que se obtuvo nota mayor o igual a 3: %d%%", mayEqual3);
  if (promocionadas > 0) {
    printf("\nPromociono una o mas materias\t\t Promedio de las materias promocionadas: %d", promPromocionadas);
  }
  printf("\n");
  
}

int recurso(int nota) {
  matRecurs++;
  while (nota < 4) {
    inicioBucle:
    printf("\t\tRecurso la materia\n");
    printf("Ingrese nota hasta aprobar la materia: ");
    scanf("%d", &nota);
    if (nota < 1) {
      printf("Ingrese nota valida! ");
      system("pause");
      goto inicioBucle;
    } else if (nota >= 3) {
      mayEqual3++;
    }
    j++;
  }
  return nota;
}

int main() {
  inicio:
  system("cls");
  printf("Ingrese cantidad de Materias: ");
  scanf("%d", &cantNota);
  if (cantNota < 1) {
    system("cls");
    printf("Ingrese numero valido! ");
    system("pause");
    goto inicio;
  }
  while (i < cantNota) {
    system("cls");
    printf("\t\t\tMateria %d\n", i + 1);
    printf("Ingrese nota final obtenida: ");
    scanf("%d", &nota);
    if (nota < 1) {
      system("cls");
      printf("Ingerse nota valida! ");
      system("pause");
      goto inicio;
    } else if (nota < 4) {
      recurso(nota);
    } else if (nota > 3) {
      aprobados += nota;
      if (notaMax == 0 || nota > notaMax) {
        notaMax = nota;
      }
    } else if (nota >= 8) {
      promocionadas++;
    }
    acumNota += nota;
    i++;
    j++;
  }
  operaciones();
}