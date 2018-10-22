/*Creado por Alan Macías. Segundo proyecto. Temperatura de una placa, estado estacionario. 22/10/18*/

#include<stdio.h>
#include<stdlib.h>


int main(){

	int n=5, x, y, i, j, izquierda=22, derecha=20, arriba=18, abajo=30;
	int **matriz;
	int *ptr;

	ptr=&matriz[n][n];
	printf("coordenadas:\n");

	matriz = (int **)malloc(n*sizeof(int*));
	for (int i = 1;i <= n;i++){
		matriz[i] = (int*)malloc(n*sizeof(int));
		} 
		
	
	for(x=1; x<=n; x++){
		for(y=1; y<=n; y++){
			matriz[x][y]=0;
			matriz[1][y]=izquierda;
			matriz[x][1]=arriba;
			matriz[n][y]=derecha;
			matriz[x][n]=abajo;
			
			printf("%i	",matriz[x][y]);
			}
		printf("\n");
		}

	//for


return 0;
}
