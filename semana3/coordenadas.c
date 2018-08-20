/* Creado por Alan Macías. Programa para convertir coordenadas cartesianas x,y,z a esfericas r,θ,φ y viceversa Semana 3. 20/08/18*/

#include<stdio.h>
#include<math.h>

int main()

{
 
 float x,y,z,r,Q,Y;
 
 printf("vamos a convertir de coordenadas cartesianas a esfericas\n");
 printf("introduce unas coordenadas de la forma (x,y,z)\n");
 scanf("%f" "%f" "%f", &x, &y, &z);
 printf("la coordenada que elegiste es: (%f,%f,%f)\n", x,y,z);
 r=sqrt(pow(x,2)+pow(y,2)+pow(z,2));
 Q=acos(z/r);
 Y=atan(y/x);
 printf("la coordenada de la forma (r,θ,φ) es: (%f,%f,%f) \n", r, Q, Y);
 
 return 0;

}
 
