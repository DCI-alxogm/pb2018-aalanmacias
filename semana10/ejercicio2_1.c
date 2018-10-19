/*Creado por Alan Macías. segundo ejercicio semana 10. 17/10/18. parte principal del programa 2. Programa que utiliza argumentos para trabajar y convertir coordenadas y temperaturas, en esta parte del programa se asegura de que los argumentos que el usuario introduce sean los necesarios para que cada una de las partes del programa trabaje correctamente*/
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(int argc, char *argv[]){
	int opcion;

	float x,y,z,r,Q,Y;
	float C;

	void temperaturas(float C);
	void coordenadas(float x, float y, float z);

	opcion=atoi(argv[1]);

	
	if(opcion!=2 || opcion!=1){
		printf("elige 1 para convertir temperaturas o 2 para convertir coordenadas\n");
		}
	
	switch(opcion){	

	case 1:
		if(argc==3){
			C=atof(argv[2]);
			temperaturas(C);
			}
		else if(argc<3){
			printf("Se necesitan mas argumentos. Para calcular temperaturas necesitamos dos argumentos\n");
			}

		else{
			printf("Demasiados argumentos. Para calcular temperaturas necesitamos dos argumentos.\n");	
		}
	break;

	case 2:

		if(argc==5){
			

			x=atof(argv[2]);
			y=atof(argv[3]);
			z=atof(argv[4]);
			coordenadas(x, y, z);
			}

		else if(argc<5){
			printf("Se necesitan mas argumentos. Para hacer conversion de coordenadas se necesitan 4 argumentos\n");
			}
		else{
			printf("Demasiados argumentos. Para convertir cordenadas necesitamos cuatro argumentos.\n");
			}
	}		
	
	return 0;
	
}
