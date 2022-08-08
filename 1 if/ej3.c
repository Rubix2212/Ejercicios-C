#include <stdio.h>

int salarioxhora, horastrabajadas, salario, impuestos;

int main(){
	printf("ingrese el salario por hora");
	scanf("%d" , &salarioxhora);
	printf("%d" , &salarioxhora);
	printf("ingrese las horas trabajadas (deben ser menosres a 38hs)");
	scanf("%d" , &horastrabajadas);
	printf("%d" , &horastrabajadas);
	
	
	if(horastrabajadas<=38)
	
{
	if(salario>50000)
	{
		impuestos = salario * 1.10;
		printf("\n\n\nTu salario con impuestos es de %d pesos por semana", impuestos);
		printf("\ny sin impuestos %d", salario);
	}
	else { 
	printf("\n\n\nTu salario es de %d pesos por semana", salario);	
	}		
    }
else 
{
printf("\nNumero de horas invalido, porfavor ingresar un numero menor a 38 horas\n");	
}	
}
