// realizar un  programa para imprimir el ticket en un supermerk2. Se leen la cantidad y el precio de producto cada vez. Se leen productos mientras el usario asi lo requiera
// informar:
// 1- Total a pagar por producto 
// 2- Cantidad total de productos
// 3- Precio del producto mas caro
// 3- Subtotal a pagar cada vez y al final la carga de los productos

#include <stdio.h>
#include <string.h>


int precio, precio2;
int acum = 0;
int cant, acumCant = 0;
int i;
int min, max;
int productos;
int juju;

int Operaciones() {
	precio2 = precio * cant;
	printf("\nTotal a pagar por el producto: %d \n", acum);
	acum += precio;
	acumCant += cant;
	printf("\nSub total a pagar, por ahora: %d \n", precio2);
	if(i == 0 || precio < min) {
		min = precio;
	}
	if(i == 0 || precio > max) {
		max = precio;
	}
}


int Errorr() {
	if(juju != 1 || juju != 2) {
		printf("Error");
		return 0;
	}
}

int Do() {
	do {
		printf("Ingrese precio del producto %d: ", i + 1);
		scanf("%d", &precio);
		printf("Ingrese cantidad del producto %d: ", i + 1);
		scanf("%d", &cant);
		Operaciones();
		printf("Quiere seguir? 1-Si 2-No: ");
		Errorr();
		scanf("%d", &juju);
		i++;
	} while(juju == 1);
}

int main() {
	Do();
	printf("\nCantidad de productos a pagar: %d", precio2);
	printf("\nTotal a pagar: %d", acumCant);
	printf("\nMaximo precio: %d \nMinimo precio: %d", max, min);
	return 0;
}