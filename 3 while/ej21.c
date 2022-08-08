#include <stdio.h>
#include <stdlib.h>
#define MAX_OPERACIONES 10

int i = 0;
int start;
int flag = 1;
int type = 4, inter = 0, nacio = 0;
int price, acumPrice = 0, acumTotalPrice;
int more5000 = 0;
int baratoInt = 0, maxPrice = 0, maxPriceType;
int est, cantEst = 0;

void operations() {
  int NACIONAL = nacio * 100 / i;
  int INTERNACIONAL = inter * 100 / i;
  acumPrice /= i;
  more5000 *= 100 / i;
  cantEst *= 100 / i;

  system("cls");
  printf("------------------------------------------------------------------------------------------------");
  printf("\n\tPorcentajes: \n\t\tViajes internacionales: %d%% \n\t\tViajes nacionales: %d%%", INTERNACIONAL, NACIONAL);
  printf("\n\tValor promedio de los boletos nacionales: $%d", acumPrice);
  printf("\n\tTotal vendido entre todos los viajes: $%d", acumTotalPrice);
  printf("\n\tPorcentaje de los viajes que superaron los $5000: %d%%", more5000);
  printf("\n\tPrecio del boleto mas barato vendido de tipo internacional: $%d", baratoInt);
  printf("\n\tPrecio del mas caro de todos los boletos: %d\t\tPertenece a %d", maxPrice, maxPriceType);
  printf("\n\tPorcentaje de estudiantes: %d%%", cantEst);
  printf("\n------------------------------------------------------------------------------------------------\n");
}

int main() {
  system("cls");
  printf("--------------------------------------------------");
  printf("\n\tDesea iniciar? 1-Si 2-No: ");
  scanf("%d", &start);
  if (start == 2) {
    printf("\n--------------------------------------------------\n");
    return 0;
  } else if (start != 1) {
    printf("\tError! Ingrese numero valido");
    printf("\n--------------------------------------------------\n");
    return 0;
  }
  while (type != 0 && i != MAX_OPERACIONES) {
    system("cls");
    printf("------------------------------------------------------------------------------------------------");
    printf("\n\tPasaje numero %d\n", i + 1);
    printf("\tTipo de pasaje 0-Exit 1-Nacional 2-Internacional: ");
    scanf("%d", &type);
    if (type == 0) {
      goto end;
    }
    printf("\tIngrese el valor del pasaje: ");
    scanf("%d", &price);
    printf("\tEs estudiante? 1-Si 2-No");
    scanf("%d", &est);
    if (est != 1 && est != 2) {
      printf("\tError! Ingrese numero valido (1-2)");
    } else if (est == 1) {
      cantEst++;
      price *= 0.80;
    } 
    acumTotalPrice += price;
    if (price > 5000) {
      more5000++;
    }
    if (type != 0 && type != 1 && type != 2) {
      printf("\tError! Ingrese numero valido (0-1-2)");
      return 0;
    }
    if (type == 1) {
      nacio++;
      acumPrice += price;
    } else {
      if (baratoInt == 0 || price < baratoInt) {
        baratoInt = price;
      }
      inter++;
    }
    if (maxPrice == 0 || price > maxPrice) {
      maxPrice = price;
      maxPriceType = type;
    }
end:
    i++;
  }
  operations();
}