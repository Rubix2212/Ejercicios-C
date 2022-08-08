#include <stdio.h>
//* se realiza un censo en una comuna con n habitantes
// indicar: porcentaje de menores de 18 años
// de mayores a 18 y menores a 45
// de mayores de 45 inclusive

// informar:
// edad maxima en cada rango
// mostrar porcentaje de la poblacion del genero femenino, masculino y no binario
// y sus edades minimas

int habitantes;
int edad;
int i;
int genero;
int hombres, mujeres, noBinarios;
int menores18;
int mayores18;
int mayores45;
int maxEdad, minEdad;

int Operations() {
  menores18 = menores18 * 100 / habitantes;
  mayores18 = mayores18 * 100 / habitantes;
  mayores45 = mayores45 * 100 / habitantes;
  hombres = hombres * 100 / habitantes;
  mujeres = mujeres * 100 / habitantes;
  noBinarios = noBinarios * 100 / habitantes;
}

int Prints() {
  printf("\n\nEdades:\nMenores de 18 años: %d%%", menores18);
  printf("\nMayores de 18 años: %d%%", mayores18);
  printf("\nMayores de 45 años: %d%%", mayores45);
  printf("\nGeneros:\nHombres: %d%%", hombres);
  printf("\nMujeres: %d%%", mujeres);
  printf("\nNo binario: %d%%", noBinarios);
  printf("\nEdad maxima: %d \nEdad minima: %d", maxEdad, minEdad);
}

int Genero() {
  if(genero == 1) {
    hombres++;
  } else if(genero == 2) {
    mujeres++;
  } else if(genero == 3) {
    noBinarios++;
  } else {
    printf("Error! Ingrese un genero valido");
    return 0;
  }
}

int Edades() {
  //error
  if(edad < 0) {
    printf("\nError! Ingrese una edad positiva");
    return 0;
  }
  if(edad < 18) {
    menores18++;
  } else if(edad >= 0 && edad > 18 && edad < 45) {
    menores18++;
  } else if(edad >= 45) {
    mayores45++;
  } 
  if(i == 0 || edad > maxEdad) {
    maxEdad = edad;
  }
  if(i == 0|| edad < minEdad) {
    minEdad = edad;
  }
}

int main() {
  printf("Ingrese cantidad de habitantes: ");
  scanf("%d", &habitantes);
  for(i = 0; i < habitantes; i++) {
    printf("Ingrese edad del ciudadano %d: ", i + 1);
    scanf("%d", &edad);
    Edades();
    printf("Ingrese genero (1-Hombre, 2-Mujer, 3-No binario): ");
    scanf("%d", &genero);
    Genero();
  }
  Operations();
  Prints();
}