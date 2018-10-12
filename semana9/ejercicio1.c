/*Creado por Alan Macías. Primer ejercicio semana 9. Programa que encuentra el numero mayor entre una lista de numeros dados por el usuario, los numeros son dados en un archivo. 08/10/2018*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
 
 
 float *numero;
 int i, contador=0, posicion;
 char aux[20]; 
 float nm=-1000000000, *st;
 

 FILE *fp;
 fp=fopen("num_maximo.txt", "r");

 while(fgets(aux, 20, fp)!=NULL){
	contador++;
	}

 fclose(fp);


 fp=fopen("num_maximo.txt", "r");

 numero=(float*) malloc (contador*sizeof(float));

 for(i=0; i<contador; i++){
	fscanf(fp, "%f", numero+i);
		if(*(numero+i)>nm){
			nm=*(numero+i); 
			posicion=i+1;
			st=numero;
		}
	}


 fclose(fp);
 printf("%f \n", nm);

 free(numero);

 return 0;
}
