/*
  en un punto panoramico se ingresa la edad de cada visitante y si la visita 
  la realiza solo o con un guia turistico.
  el punto admite como maximo 10 personas y puede ser que no reciva visitas. 
  se considera que el usuario termina con la carga de datos ingresando 0 como edad.
  Informar:
    rango de edad de los visitantes (edad max y min)
    porcentaje de los visitantes que asistieron con guia
    promedio de las edades de los que asistieorn solos
    la edad minima de los que asistieron sin guia
    expresar en porcentaje cuantos de los que asistieron con guia son mayores a 35 años
    porcentaje de los menores de edad
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX_PERSONAS 10
 
int edad = 9234, edadMax, edadMin;
int i = 0;
int guiados = 0, solos = 0;
char guia;
int promEdadSolos = 0;
int edadMin_Solos = 0;
int may35 = 0;
int menores = 0;

void prints() {
  system("cls");
  printf("Rango de edad de los visitantes (edad max y min): %d - %d\n", edadMin, edadMax);
  printf("Porcentaje de los visitantes que asistieron con guia: %d%%\n", (guiados * 100) / i);
  printf("Promedio de las edades de los que asistieron solos: %d\n", promEdadSolos / solos);
  printf("Edad minima de los que asistieron sin guia: %d\n", edadMin_Solos);
  printf("Cuantos de los que asistieron con guia son mayores a 35 años: %d%%\n", (may35 * 100) / guiados);
  printf("Porcentaje de los menores de edad: %d%%", (menores * 100) / i);
}

int main() {
  while (edad != 0 && i != MAX_PERSONAS) {
    inicio:
    system("cls");
    printf("\t\t\tUSUARIO %d\n", i + 1);
    printf("Ingrese edad: ");
    scanf("%d", &edad);
    if (edad == 0) goto end;
    if (i == 0 || edad > edadMax) edadMax = edad;
    if (i == 0 || edad < edadMin) edadMin = edad;
    if (edad <= 18) menores++;
    printf("Ingrese si asistio con guia: ");
    scanf("%s", &guia);
    if (guia == 's' || guia == 'S') {
      guiados++;
      if (edad > 35) {
        may35++;
      }
    } else if (guia == 'n' || guia == 'N') {
      solos++;
      promEdadSolos += edad;
      if (edadMin_Solos == 0 || edad < edadMin_Solos) {
        edadMin_Solos = edad;
      }
    }
    else {
      printf("Ingrese numero valido!\n");
      system("pause");
      goto inicio;
    }
    i++;
  }
  end:
  prints();
}