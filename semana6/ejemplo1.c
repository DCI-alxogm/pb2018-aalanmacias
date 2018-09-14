/*Creado por Alan Macías. primer ejemplo semana 6. Ejemplos del 1 al 3 10/09/18*/

#include<stdio.h>

int main()
{

int i, j, n=10;
float numero[n];

for(i=0;i<n;i++){
	numero[i]=0; //asigna cada elemento del arreglo
	}
for(i=0;i<n;i++){
	scanf("%f", &numero[i]); //asigna el valor a partir de lo que proporciona el usuario, linea por linea
	}
for(j=0;j<n;j++){
	printf("%f\n", numero[j]);
	}
return 0;
}

