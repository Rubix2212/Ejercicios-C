//una plataforma de streaming pone en oferta su contenido otorgando descuentos en funcion a la cantidad de videos comprados:
//de 1 a 3 25%
//de 4 a 6 35%
//mas de 6 50%
//tambien se otorga un descuento del 5% si la persona se sucrisbe
// se leen la cantidad de videos, el precio por video y si el usuario es suscriptor o no. informar el total a pagar
#include <stdio.h>

float descuento, total, precioxvideo;
int suscripcion, videos;

int main() {
    printf("Ingrese cantidad de videos: ");
    scanf("%d", &videos);
    printf("Precio por video: ");
    scanf("%f", &precioxvideo);
    printf("Si la persona esta suscrita ingrese 1 si no, 2: ");
    scanf("%d", &suscripcion);
    precioxvideo=precioxvideo*videos;
    if(videos >= 1 && videos <=3){
		descuento=0.75;
	}
	if(videos >= 4 && videos <=6){
		descuento=0.65;
	}
	if(videos > 6)
	{
		descuento=0.50;
	}
	if(suscripcion == 1){

	descuento=descuento + 0.05;
} 
	total=precioxvideo*descuento;
	printf("%f", total);
}


