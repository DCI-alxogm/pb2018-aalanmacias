/*Programa que entrega valores en un rango de valores con un espaciado especifico en las tres dimenciones ("x", "y" y "z")*/
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
	
	printf("El programa que estas ejecutando es: %s\n", argv[0]);

	int Vix, Vfx, Viy, Vfy , Viz, Vfz, hx, hy, hz;
	int i=0, j=0, k=0, n;

	Vix=atof(argv[1]);
	Vfx=atof(argv[2]);
	Viy=atof(argv[3]);
	Vfy=atof(argv[4]);
	Viz=atof(argv[5]);
	Vfz=atof(argv[6]);
	n=atof(argv[7]);

	hx=(Vfx-Vix)/n;
	hy=(Vfy-Viy)/n;
	hz=(Vfz-Viz)/n;

printf("%i %i %i %i %i %i %i %i %i %i\n", Vix, Vfx, Viy, Vfy, Viz, Vfz, hx, hy, hz, n);

	if(argc==8){
		printf("X	Y	Z\n");
		
		for(i=Vix; i<=Vfx; i+=hx){

			for(j=Viy; j<=Vfy; j+=hy){

				for(k=Viz; k<=Vfz; k+=hz){
					if(i=j=k){
						printf("%i	%i	%i\n", i, j, k);
						}
					}
				}
			}
		}

	else if(argc>8){
		printf("Mas argumentos de los necesarios\n");
		}

	else{
		printf("Se requiere de al menos 8 argumentos\n");
		}
return 0;
}
