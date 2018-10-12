/*Creado por Alan Macias. primer ejercicio de funciones. 10/10/18. semana nueve. entrada sin salida*/

#include<stdio.h>
#include<math.h>

void cuadrado(float x);

int main ()
{
 float x;
				
 printf("Escribe el valor de x\n");				
 scanf("%f",&x);
 cuadrado(x);
 return 0;
					}
			
 void cuadrado (float x){
	float x2;
	x2= x*x;
	printf("El valor de x^2 es: %f",x2);
}
