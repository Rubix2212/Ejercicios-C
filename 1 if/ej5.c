//en una empresa de sistemas, los salarios de los empleados van aumentar segun el contrato actual
//contrato		4aumento
//0 a 9000		20%
//9001 a 15000  15%
//15001 a 20000 5%
//mas de 20000  0%
//escribir un programa que solicite el salario actual y calcule y visualice el nuevo salar

#include <stdio.h>

int salario, aumento;

main() {
	printf("Ingrese salario");
	scanf("%d", &salario);

if(salario <= 9000){
	salario = salario * 1.20;
	printf("Tu salario es %d", salario);
}
else 
{ if(salario>9001<15000) {
	salario = salario * 1.15;
	printf("Tu salario es %d", salario);}
}
if(salario>15001<20000){
	salario = salario * 1.05;
	printf("Tu salario es %d", salario);

}
}
