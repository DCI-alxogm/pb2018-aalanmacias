/*Creado por Alan Macías. Primer ejercicio semana 9. Programa que encuentra el numero mayor entre una lista de numeros dados por el usuario, los numeros son dados en un archivo. 08/10/2018*/

#include<stdio.h>
int main()
{
 
 FILE *fp;
 double *numero;
 int i, contador;

 fp=fopen("num_maximo.txt", "r");

 while(*numero!=NULL){
	fscanf(fp, "%lf", &numero);
	contador++;
	}

 fclose(fp);
 printf("%lf", numero);
}
