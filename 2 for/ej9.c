
// se leen 5 temperaturas tomadas en dias de la semana: informar promedio, temperatura maxima, porcentaje de los dias en los que las temperaturas superaron
// los 18�C, indicar si se registraron temperaturas negativas
#include <stdio.h>
int i, cont = 0, acum = 0, n = 5, cont2 = 0;
float temp, promedio, max;

main()
{
	for (i = 0; i < n; i++)
	{
		printf("Ingrese temperatura n");
		printf("%c", 167);
		printf("%d: ", i + 1);
		scanf("%f", &temp);
		acum = acum + temp;
		if (temp > 18)
		{
			cont = cont + 1;
		}
		if (temp < 0)
		{
			cont2 = cont2 + 1;
		}
		if (i == 0 || max < temp)
		{
			max = temp;
		}
	}

	promedio = acum / 5;
	cont = (cont * 100) / 5;
	printf("\nPromedio = %f", promedio);
	printf("\nTemperatura maxima = %f", max);
	printf("\nPorcentaje que lo dias superaron los 18");
	printf("%c", 167);
	printf("C = %d", cont);
	printf("%c", 37);
	if (cont2 > 0)
	{
		printf("\nSi, hay temperaturas negativas.");
	}
	if (cont2 == 0)
	{
		printf("\nNo hay temperaturas negativas.");
	}
}
