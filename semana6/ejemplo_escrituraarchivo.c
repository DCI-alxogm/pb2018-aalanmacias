
#include<stdio.h>

int main()
{

 FILE *archivo;
 float var1 , var2;
 char var[255];

//ESCRITURA

 archivo=fopen("test.txt", "w");
 fputs("Esta es una prueba fputs...\n", archivo);
 fprintf(archivo, "fprintf...\n");
 fprintf(archivo, "%f %f\n", 0.15, 100.8);
 fclose(archivo);

}
