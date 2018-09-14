/*Creado por Alan Macías. Tercer ejemplo semana 6. 10/09/18*/

#include<stdio.h>

int main()
{
 int i, n;
 printf("¿con cuantos valores quieres trabajar?\n");
 scanf("%i",&n);
 float numero[n]; 

 for(i=0; i<n; i++){
	scanf("%f", &numero[i]);
	numero[i]*=2; //multiplica el numero dado por 2
	printf("%f\n", numero[i]); // imprime el valor del arreglo modificado.
	}
return 0;
}
