// se lee el valor de una divisa durante 5 dias habiles
// informar:
// -promedio
// -valor minimo/maximo
// -Si supero el valor de 200
// -Porcentaje de los dias que se ubico sobre 180
#include <stdio.h>

float acum = 0, min, valor, max, promedio;
int i, n = 5, cont = 0, sup = 0, porcentaje;

main() {
    for (i = 0; i < n; i++) {
        printf("Ingrese valor de la divisa en el dia %d: ", i + 1);
        scanf("%f", &valor);
        acum += valor;
        if (i == 0 || valor < min)
        {
            min = valor;
        }
        if (i == 0 || valor > max)
        {
            max = valor;
        }
        if (valor > 200)
        {
            sup += 1;
        }
        if (valor > 180)
        {
            cont += 1;
        }
    }
    promedio = acum / 5;
    porcentaje = cont * 20;
    printf("\nEl promedio es de: %f", promedio);
    printf("\nEl valor minimo es de: $%f", min);
    printf("\nEl valor maximo es de: $%f", max);
    if (sup != 1 && sup > 0) {
        printf("\nEl valor supero los $200 en %d dias", sup);
    }
    if (sup == 1) {
        printf("\nEl valor supero los $200 en %d dia", sup);
    }
    else {
        printf("\nEl valor no supero los $200");
    }
    printf("\nEl porcentaje de los dias que supero los 180 es de: %d", porcentaje);
    printf("%c", 37);
}
