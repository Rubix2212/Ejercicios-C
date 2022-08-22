#include <stdio.h>

char lowerCase(str palabra) {
  if (palabra >= 'A' && palabra <= 'Z') {
    return palabra + 0x20;
  } else {
    return palabra;
  }
}

int main() {
  char palabra[255];
  printf("Ingrese una palabra: ");
  scanf("%s", &palabra);
  printf("%s", lowerCase(palabra));
}