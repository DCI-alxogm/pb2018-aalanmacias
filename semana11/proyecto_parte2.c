/*Creado por Alan Macías. Segundo proyecto. Temperatura de una placa, estado estacionario. 22/10/18*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void calculos(){

	int n, i, x, y, count, nn=0;
	float aux, temp, max=1, precision, izquierda, derecha, arriba, abajo;
	float **matriz;
	char nombre[10];
	FILE *iniciales;
	FILE *fp;
	FILE *resultados;

	iniciales=fopen("valores_iniciales.txt", "r");
	fscanf(iniciales, "%i %f %f %f %f %f", &n, &izquierda, &derecha, &arriba, &abajo, &precision);
	fclose(iniciales);


	matriz = (float **)malloc(n*sizeof(int*));
	for (int i=1 ;i<=n ;i++){
		matriz[i] = (float*)malloc(n*sizeof(int));
		} 
	
	fp=fopen("matriz_inicial.txt", "w");
	for(x=1; x<=n; x++){
		for(y=1; y<=n; y++){
			matriz[x][y]=0;
			matriz[1][y]=izquierda;
			matriz[x][1]=arriba;
			matriz[n][y]=derecha;
			matriz[x][n]=abajo;
			fprintf(fp, "%f ", matriz[x][y]);
			}
		fprintf(fp,"\n");
		}
	fclose(fp);
	

	while(fabs(max)>=precision){
		if(count%10==0){
			sprintf(nombre,"%i.ods", nn);
			resultados=fopen(nombre, "w");
			}
		for(x=2; x<=n-1; x++){
			for(y=2; y<=n-1; y++){
				aux=matriz[x][y];
				matriz[x][y]=(matriz[x+1][y]+matriz[x-1][y]+matriz[x][y+1]+matriz[x][y-1])/4;
				temp=(matriz[x][y]-aux)/aux;
				if(temp<max){
					max=temp;
					}
				}
			}

	for(x=1; x<=n; x++){
		for(y=1; y<=n; y++){
			if(count%10==0){
				fprintf(resultados, "%f ", matriz[x][y]);
				}
			}
		if(count%10==0){
			fprintf(resultados, "\n");
			}
		}
	count++; 
	if(count%10==0){
		nn++;
		}
	}

}
