// un negocio implementa una promocion
// en sus productos de 3 por 2.el cliente compra 3 productos y se le descuenta el precio del mas barato. informar total a pagar
#include <stdio.h>

float valor, min;
int i, cont = 0, acum = 0, n = 3;

main()
{
	for (i = 0; i < n; i++)
	{
		printf("Ingrese producto %d: ", i);
		scanf("%f", &valor);
	}
	if (i == 0 || valor > min)
	{
		min = valor;
	}
	acum = acum + valor;
	acum = acum - min;

	printf("\nTotal: %f", acum);
	
}
