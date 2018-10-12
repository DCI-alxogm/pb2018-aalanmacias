/*creado por Alan Macías. Segundo ejercicio semana 9. Programa que calcula el promedio y desviacion estandar de un conjunto de numeros dados en un archivo. 08/10/2018.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main()
{

 float *numero, DesEst, promedio, suma=0;
 char aux[30];
 int i, j, contador; 

 FILE *fp;
 fp=fopen("preomedio.txt", "r");

 while(fgets(aux, 30, fp)!=NULL){
	contador++;
 	}
 fclose(fp);


 fp=fopen("promedio.txt", "r");
 
 numero=(float*) malloc (contador*sizeof(float));

 for(i=0; i<contador; i++){
	fscanf(fp, "%f", numero+i);
	suma+= *(numero+i);
	}

 fclose(fp);

 promedio=suma/contador;
 suma=0;

 for(j=0; j<contador; j++){
	suma+=pow((*(numero+i)-promedio), 2);
	}

 suma/=contador;
 DesEst=sqrt(suma);

 free(numero);

 printf("El numero de datos que se tomaron fueron: %i \n El promedio es: %f \n La desviacion estandar es: %f \n", contador, promedio, DesEst);

 return 0;

}
