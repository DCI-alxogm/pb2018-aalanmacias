/*Creado por Alan Macías. Programa que lee de un archivo la potencia de la funcion X^p. siendo siempre p>=1. Del archivo tambien se lee el intrvalo en el que se va a evaluar la funcion, así como el numero de veces que se va a evaluar (N). Se calcula tambien la integral de f(x) desde el valor minimo del intervalo hasta el valor de x, usando el metodo del trapecio. Se guarda el resultado en un archivo por columnas (1.- el valor de X, 2.- f(x) y en la 3.- I(x).*/
 
#include<stdio.h>
#include<math.h>

int main()
{
 float delta, h, integral, x, fdx, a, b;
 int p, n, k, i;
 
 FILE *fp;
 FILE *resultado;
 fp=fopen("datos_E1.txt", "r");

 //se lee del archivo la potencia
 fscanf(fp, "%i", &p);
 //Se lee el intervalo en el que se va a evaluar la funcion 
 fscanf(fp, "%f %f", &a, &b); 
 //Se lee el numero de veces que se va a evaluar y el numero de trapecios para calcular la integral
 fscanf(fp, "%i %i", &n, &k);

 fclose(fp);

 resultado=fopen("resultado_E1", "w");
 fprintf(resultado, "Valor de X		f(x)			I(x)   \n");
 delta=(b-a)/n;
 for(x=a; x<b; x+=delta){
	fdx=pow(x,p);
 	h=(x-a)/k;
 	integral=((pow(a,p)+pow(x,p))/2);

	for(i=1; i<k; i++){
		integral+=pow(a+i*h,p);
		}
		integral*=h;
	
 fprintf(resultado, "%f		%f		%f\n", x, fdx, integral);
	}

 fclose(resultado);

 return 0;
}   
 
 


