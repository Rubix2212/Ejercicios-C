/*
  un anuncio en redes sociales se publica hasta ser visualizado "n" veces o hasta cumplir con "m" interacciones.
  las interacciones tienen un precio y las vizualizacion otro
  de cada ineraccion/visuañizacion, se registra:
  rango etario (menor a 18) (mayor o igual a 18) y (hasta 35 o >= 35)
  rango horario al la que se realizo la interaccion (am/pm).
  el anuncio se muestra por lo menos una vez y se lee la edad del usuario.
  INFORMAR:
    que porcentje en cada rango de edad vieron el anuncio 
    en que rango horario hubo mayor interaccion
    edades maximas en cada rango
    a que rango de edades corresponde la mayor y la menor cantidad de interacciones y visualizaciones
    total a pagar por el anuncio
*/

#include <stdio.h>
#include <stdlib.h>

int t = 0,
  cantVis,
  precioVis,
  cantInter,
  precioInter,
  flag,
  rangEt,
  men18 = 0, may18 = 0, may35 = 0,
  time, am = 0, pm = 0,
  maxMen18 = 0, maxMay18 = 0, maxMay35 = 0;

int operations(int PRECIO_TOTAL) {
  men18 *= 100 / t;
  may18 *= 100 / t;
  may35 *= 100 / t;
  int total = (cantInter * precioInter) + (cantVis * precioVis);
  PRECIO_TOTAL -= total;

  system("cls");
  printf("\n\n\n\t-------------------------------------------------------------------------------------------");
  printf("\n\tPorcentajes:\n\t\tMenores de 18 anios: %d%%\n\t\tMayores de 18 anios: %d%%\n\t\tMayores de 35 anios: %d%%", men18, may18, may35);
  printf
  printf("\n\tEdades maximas en cada rango:\n\t\tMenores de 18 anios: %d anios\n\t\tMayores de 18 anios: %d anios\n\t\tMayores de 35 anios: %d anios", maxMen18, maxMay18, maxMay35);
  printf("\n\tTotal a pagar por el anuncio: $%d", PRECIO_TOTAL);
  printf("\n\t-------------------------------------------------------------------------------------------\n");
  system("pause");
  return 0;
}


int main() {
  system("cls");
  printf("\n\t--------------------------------------------------\n");
  printf("\tIngrese numero de visualizaciones a cumplir: ");
  scanf("%d", &cantVis);
  system("cls");
  printf("\n\t--------------------------------------------------\n");
  printf("\tIngrese precio por visualizacion: ");
  scanf("%d", &precioVis);
  system("cls");
  printf("\n\t--------------------------------------------------\n");
  printf("\tIngrese numero de interacciones a cumplir: ");
  scanf("%d", &cantInter);
  system("cls");
  printf("\n\t--------------------------------------------------\n");
  printf("\tIngrese precio por interaccion: ");
  scanf("%d", &precioInter);
  printf("\n\t--------------------------------------------------\n");

  int PRECIO_TOTAL = (cantInter * precioInter) + (cantVis * precioVis);
  do {
    system("cls");
    printf("Es 1-Interaccion o 2-Visualizacion: ");
    scanf("%d", &flag);
    if (flag != 1 && flag != 2) {
      printf("\nError! Ingrese numero valido! (1-2)\n");
      return 0;
    }
    if (flag == 1) {
      printf("Ingrese rango etario: ");
      scanf("%d", &rangEt);
      if (rangEt < 0 || rangEt >= 100) {
        printf("Error! Ingrese edad valida! (0 años-100 años)");
        return 0;
      } else if (rangEt < 18) {
        if (maxMen18 == 0 || rangEt > maxMen18) {
          maxMen18 = rangEt;
        }
        men18++;
      } else if (rangEt >= 18 && rangEt < 35) {
        if (maxMay18 == 0 || rangEt > maxMay18) {
          maxMay18 = rangEt;
        }
        may18++;
      } else {
        if (maxMay35 == 0 || rangEt > maxMay35) {
          maxMay35 = rangEt;
        }
        may35++;
      }
      printf("Ingrese horario que se realizo la interaccion (1-AM 2-PM): ");
      scanf("%d", &time);
      if (time == 1) {
        am++;
      } else if (time == 2) {
        pm++;
      } else {
        printf("Error! Ingrese numero valido! (1-2)");
        return 0;
      }
      cantInter--;

    } else {
      printf("Ingrese rango etario: ");
      scanf("%d", &rangEt);
      if (rangEt < 0 || rangEt >= 100) {
        printf("Error! Ingrese edad valida! (0 años-100 años)");
        return 0;
      } else if (rangEt < 18) {
        if (maxMen18 == 0 || rangEt > maxMen18) {
          maxMen18 = rangEt;
        }
        men18++;
      } else if (rangEt >= 18 && rangEt < 35) {
        if (maxMay18 == 0 || rangEt > maxMay18) {
          maxMay18 = rangEt;
        }
        may18++;
      } else {
        if (maxMay35 == 0 || rangEt > maxMay35) {
          maxMay35 = rangEt;
        }
        may35++;
      }
      printf("Ingrese horario que se realizo la visualizacion (1-AM 2-PM): ");
      scanf("%d", &time);
      if (time == 1) {
        am++;
      } else if (time == 2) {
        pm++;
      } else {
        printf("Error! Ingrese numero valido! (1-2)");
        return 0;
      }
      cantVis--;
    }
    t++;
  } while (cantVis != 0 && cantInter != 0);
  operations(PRECIO_TOTAL);
}