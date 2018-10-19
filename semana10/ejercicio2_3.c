/*Creado por Alan Macías. tercera parte del programa 2. semana 10. 17/10/18.*/
#include<stdio.h>
#include<math.h>

void coordenadas(float x, float y, float z){

	float r,Q,Y;

	printf("vamos a convertir de coordenadas cartesianas a esfericas\n");
	printf("la coordenada que elegiste es: (%f,%f,%f)\n", x,y,z);
	r=sqrt(pow(x,2)+pow(y,2)+pow(z,2));
	Q=(acos(z/r))*(180/3.1415926);
	Y=(atan(y/x))*(180/3.1415926);
	printf("la coordenada de la forma (r,θ,φ) es: (%f,%f,%f) \n", r, Q, Y);
	printf("la coordenada cartesiana que introduciste en un inicio fue:(%f,%f,%f)\n", x,y,z);
	}

