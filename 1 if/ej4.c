//se desea calcular el salario semanal de los tabajadores de una empresa de acuerdo a las siguientes normas: horas semanales trabajadas menos que 38
//impuesto del 10% si el salario es mayor a 50000
#include <stdio.h>

int salarioxhora, horastrabajadas, salario, impuestos, horas_extra;



int main(){
	printf("Ingrese el salario por hora: ");
	scanf("%d", &salarioxhora);
	printf("Ingrese las horas trabajadas (deben ser menores a 38hs): ");
	scanf("%d", &horastrabajadas);
	salario = (salarioxhora * horastrabajadas);


if(horastrabajadas<=38)
{
if(salario>50000)
{
	impuestos = salario * 0.90; 
	printf("\n\n\nTu salario con impuestos es de %d pesos por semana", impuestos);
	printf("\ny sin impuestos %d", salario);
	}
else {
	printf("\n\n\nTu salario es de %d pesos por semana", salario);	
}
}
else
	{
	horas_extra = salario * 1.50;
	printf("\n\n\nTu salario con horas extra es de %d pesos por semana", horas_extra);
	printf("\ny sin horas extra es de %d", salario);
	}
}
