/*creado por Alan Macias, segundo programa ejemplo de la semana 10. programa que utiliza los argumentos dados en la terminal para funcionar*/
#include<stdio.h>

int main(int argc, char *argv[]){
	printf("El programa que estas ejecutando es: %s\n", argv[0]);
	
	char *nombre_archivo;
	FILE *fp;

	if(argc==2){
		nombre_archivo=argv[1];
		printf("El nombre del archivo a abrir es: %s \n", nombre_archivo);
		fp=fopen(nombre_archivo, "w+");
		///aqui se pondria todo lo que se debe hacer...
		fclose(fp);
		}
		
	else if(argc > 2){
		printf("Mas argumentos de los necesarios\n");
		}

	else{
		printf("Se requiere de al menos 1 argumento\n");
		}
	return 0;
	}

