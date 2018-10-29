/*Creado por Alan Macías. Segundo proyecto. Temperatura de una placa, estado estacionario. 22/10/18*/

//Se declaran las librerias necesarias para el funcionamiento del programa.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Ésta es la funcion que se va a llamar en la parte principal del programa.
void calculos(){

	//Se declaran las variables. De algunas se tomaran sus valores del documento de los valores iniciales.
	int n, i, x, y, count, nn=0;
	float aux, temp, max=1, precision, izquierda, derecha, arriba, abajo;
	float **matriz;
	char nombre[10];

	//Se hace la declaracion de las variables necesarias para poder leer e imprimir documentos
	FILE *iniciales;
	FILE *fp;
	FILE *resultados;

	//Se leen los valores iniciales del documento con nombre "valores_iniciales.txt" y los asigna a sus respectivas variables
	iniciales=fopen("valores_iniciales.txt", "r");
	fscanf(iniciales, "%i %f %f %f %f %f", &n, &izquierda, &derecha, &arriba, &abajo, &precision);
	fclose(iniciales);

	//Se hace uso de memoria dinamica para la matriz n*n
	matriz = (float **)malloc(n*sizeof(int*));
	for (int i=1 ;i<=n ;i++){
		matriz[i] = (float*)malloc(n*sizeof(int));
		} 

	//Se abre un documento de escritura en donde se guardara la primera matriz inicializada a 0, excepto en las partes externas de la matriz
	fp=fopen("matriz_inicial.txt", "w");
	//Se utilizan dos ciclos for para dar los valores a la matriz inicial.
	for(x=1; x<=n; x++){
		for(y=1; y<=n; y++){
			//se declaran primero todas las posiciones igual a 0
			matriz[x][y]=0;
			//Se le dan los valores tomados del documento a las orillas de la matriz
			matriz[1][y]=izquierda;
			matriz[x][1]=arriba;
			matriz[n][y]=derecha;
			matriz[x][n]=abajo;
			//Se imprime la matriz inicializada a 0
			fprintf(fp, "%f ", matriz[x][y]);
			}
		//Se imprime un salto de linea para dar forma a la matriz
		fprintf(fp,"\n");
		}
	//Se cierra el documento en donde la matriz inicial se va a imprimir
	fclose(fp);
	
	//Se utiliza un while para hacer que las operaciones se realicen mientras el valor absoluto de un valor que se establece mas adelante en el codigo sea mayor que una precision que el usuario establece
	while(fabs(max)>=precision){
		//El if se utiliza para imprimir solo 1 de cada diez matrices
		if(count%10==0){
			//El valor del contador nn se cambia float a char y se guarda en la variable nombre
			sprintf(nombre,"%i.ods", nn);
			//Se inicializa el documento en el que se van a imprimir todas las demas matrices (1 de cada 10)
			resultados=fopen(nombre, "w");
			}
		//Se utilizan otros dos ciclos for desde 2 hasta n-1(para no cambiar los valores de las orillas de la matriz) para realizar los calculos de cada uno de los puntos de la matriz central n-1*n-1
		for(x=2; x<=n-1; x++){
			for(y=2; y<=n-1; y++){
				//Se guarda el valor de cada matriz antes de realizar las siguientes operaciones
				aux=matriz[x][y];
				//Se rcalcula el valor necesario a cada posicion 
				matriz[x][y]=(matriz[x+1][y]+matriz[x-1][y]+matriz[x][y+1]+matriz[x][y-1])/4;
				//Se calcula un epsilon que sera el que se usara para determinar en que momento se detiene el ciclo while 
				temp=(matriz[x][y]-aux)/aux;
				//Si el valor de epsilon es menos que el maximo definido al declarar las variables, se guarda el valor del epsilon en "max"
				if(temp<max){
					max=temp;
					}
				}
			}
	//Los siguientes siclos for se usan unicamente para juntar la matriz con los extremos inicializados a los valores que dio el usiario, y la matriz interior en donde se realizan los calculos
	for(x=1; x<=n; x++){
		for(y=1; y<=n; y++){
			//Se imprime unicamente 1 de cada 10 matrices
			if(count%10==0){
				fprintf(resultados, "%f ", matriz[x][y]);
				}
			}
		if(count%10==0){
			fprintf(resultados, "\n");
			}
		}
	//Se utiliza un contador para saber cuantas raices se han calculado y poder asi solo imprimir una cada 10
	count++; 
	//El contador nn se utiliza para darle nombre a los archivos que se van a crear, el nombre de los archivos sera el numero de iteracion que se imprime. 
	if(count%10==0){
		nn++;
		}
	}

}
