// Se desea realizar un programa para procesar las temperaturas de una region. 
// Por lo menos se lee una nota si el usario indica el fin de la carga
// Mostrar: 
// -Promedio de temp negativas
// -Porcentaje de las temperaturas mayores a 24
// -Temp min en ese rango 
// -Si se registraron temp mayores a 30
// -Promedio de la region

#include <stdio.h>

int i = 0;
int temp;
int promTempNeg;
int flag = 1;
int tempNeg;
int may24, may30;
int minTemp;
int acum = 0;


int Temperaturas() {
  if(temp < 0) {
    tempNeg++;
  }
  if(temp > 24) {
    may24++; // may = may + 1
  }
  if(i == 0 || temp < minTemp) {
    minTemp = temp;
  }
  if(temp > 30) {
    may30++;
  }
}

int Operations() {
  tempNeg = tempNeg / i; // 5 = total -> i
  may24 = may24 * 100 / i;
  acum = acum / i;
  printf("\n\nPromedio de temperaturas negativas: %d", tempNeg);
  printf("\nPorcentaje de temperautras mayores a 24: %d%%", may24);
  printf("\nTemperatura minima: %d", minTemp);
  if(may30 != 0) {
    printf("\nSe registraron temperaturas mayores a 30.");
  } else {
    printf("\nNo se registraron temperaturas mayores a 30.");
  }
  printf("\nPromedio de la region: %d", acum);
}

int main() {
  do {
      printf("Ingrese temp %d: ", i + 1);
      scanf("%d", &temp);
      acum += temp;
      Temperaturas();
      printf("Desea continuar? 1-Si 2-No: ");
      scanf("%d", &flag);
      if(flag != 1 && flag != 2) {
        printf("Error! Ingrese numeros validos! (1-2)");
        return 0;
      }
      i++;
    } while(flag == 1);
  Operations();
  return 0;
}