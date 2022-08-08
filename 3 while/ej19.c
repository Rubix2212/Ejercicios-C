#include <stdio.h>
/*
  un centro medico otorga N turnos por dias. el centro tiene 3 especialidades. 
  De cada paciente, se lee: la edad y el numero de afiliado. 
  informar: 
  numero de afiliado mas joven atendido.
  porcentaje de pacientes en cada especialidad.
  edad maxima ente los pacientes que concurrieron a la especialidad 3.
  porcentaje de mayores de edad que realizaron consultas en la especialidad 1.
  promedio de las edades de los pacientes que realizaron consultas en la especialidad numero 2.
*/

int i;
int turnos;
int especialidad;
int afiliado;
int edad;
int contEsp1 = 0, contEsp2 = 0, contEsp3 = 0, cont1 = 0, cont2 = 0;
int masJoven = 0;
int afiliadoJoven;
int edadMaxEsp3;
int mayEdad1 = 0;
int acumEdad2 = 0;

void prints() {
  cont1 = contEsp1 * 100 / turnos;
  mayEdad1 *= 100 / cont1;
  cont2 = contEsp2 * 100 / turnos;
  acumEdad2 = acumEdad2 / cont2;
  contEsp3 *= 100 / turnos; 

  printf("\n\n\nNumero de afiliado mas joven atendido: %d", afiliadoJoven);
  printf("\nPorcentaje de los pacientes en cada especialidad: \nEspecialidad 1: %d%%\nEspecialidad 2: %d%%\nEspecialidad 3: %d%%", contEsp1, contEsp2, contEsp3);
  printf("\nEdad maxima de los pacientes que concurrieron a la especialidad 3: %d", edadMaxEsp3);
  printf("\nPorcentaje de mayores de edad que realizaron consultas en la especialidad 1: %d%%", mayEdad1);
  printf("\nPromedio de las edades de los pacientes que realizaron consultas en la especialidad numero 2: %d", acumEdad2);
}

void operations() {
  if (i == 0 || edad < masJoven) {
    masJoven = edad;
    afiliadoJoven = afiliado;
  } 
  if (especialidad == 1) {
    if (edad >= 18) {
      mayEdad1++;
    }
    contEsp1++;
  } else if (especialidad == 2) {
    contEsp2++;
    acumEdad2 += edad;
  } else {
    if (i == 0 || edad > edadMaxEsp3) {
      edadMaxEsp3 = edad;
    }
    contEsp3++;
  }
}

int main(void) {
  printf("Ingrese cantidad de turnos: ");
  scanf("%d", &turnos);
  for (i = 0; i < turnos; i++) {
    printf("Edad del paciente %d: ", i + 1);
    scanf("%d", &edad);
    printf("Ingrese especialidad del paciente %d: ", i + 1);
    scanf("%d", &especialidad);
    // Error
    if (especialidad != 1 && especialidad != 2 && especialidad != 3) {
      printf("Error! Ingrese especialidad valida! (1, 2 o 3)");
      return 0;
    }
    printf("Ingrese numero de afiliado del paciente %d: ", i + 1);
    scanf("%d", &afiliado);
    operations();
  }
  prints();
}