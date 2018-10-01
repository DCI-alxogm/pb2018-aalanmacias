/*Creado por Alan Macías. Poyecto de la semana 8. 24/09/18. Calcular la orbita de los planetas de nuestro sistema solar entorno al sol*/

#include<stdio.h>
#include<math.h>

int main()
{
//Se declara la variable para poder leer los datos de un documento.
 FILE *fp;
 
//Se declaran las variables para los ciclos for, los nombres de los planetas con los que va a creear los documentos, y los valores necesarios para calcular las orbitas.
 int e;
 char planeta[20];
 double tt, h, M, mp;
 double i;
 double Xi, Yi, Zi;
 double Vxi, Vyi, Vzi;
 double X0, Y0, Z0;
 double Vx0, Vy0, Vz0;
 double G, r, PI=3.141592653589;

//Se inicializa el programa de donde se van a leer los valores iniciales de las posiciones y velocidades.
 fp=fopen("coordenadas_y_velocidades.txt", "r");

//Se inicia un ciclo for para leer y guardar los datos de cada uno de los planetas  
for(e=0; e<9; e++){

	//Se lee el nombre del planeta para generar el archivo de salida con ese nombre
	fscanf(fp, "%s", &planeta);

	//se lee el tiempo total de la evoluion, el tamaño del incremento temporal, la masa de la estrella y la masa de cada uno de los planetas 
	fscanf(fp, "%lf %lf %lf %lf", &tt, &h, &M, &mp);

	//se leen las posiciones y velocidades iniciales
	fscanf(fp, "%lf %lf %lf %lf %lf %lf", &X0, &Y0, &Z0, &Vx0, &Vy0, &Vz0);
	
	//Se declara la variable para poder crear el documento de escritura
	FILE *RO;

	//Se inicializa el documento que se va a escribir y se establece que cada documento de salida tendra el nombre que el documento de lectura establece para cada planeta
	RO=fopen(planeta, "w");	

	//Se declara un contador para imprimir determinada cantidad de datos sin perder precision
	int count=0;

	//Se declara el valor de la constante universal de gravitacion
	G=(4.0*pow(PI,2));

	//Las unidades que se dan en las velocidades iniciales estan en AU/dia, y la contante de gravitacion esta en unidades de AU/año², asi que multiplicamos las velocidades por el equivalente a 1 año en dias
	Vx0*=365.242;
	Vy0*=365.242;
	Vz0*=365.242;

	fprintf(RO,  "Xi		Yi		Zi		Vxi		Vyi		Vzi\n");

	//Se utiliza un ciclo for para realizar los calculos y cada nuevo valor obtenido se use como las nuevas condiciones para evaluar las siguientes posiciones y velocidades 
	for(i=0.0; i<=tt; i+=h){

		//Se utiliza un if para solo imprimir datos que sean multiplos de 10, es decir, se imprime uno de cada diez datos.
		if(count%50==0){
                    		 fprintf(RO, "%f,	 %f,	 %f,	 %f,	 %f,	 %f\n", Xi, Yi, Zi, Vxi, Vyi, Vzi);
           	 	}
            		count++;
		
		//operaciones ya definidas para calcular posiciones y velocidades.
		Xi=X0+(Vx0*h);
		
		Yi=Y0+(Vy0*h);
		
		Zi=Z0+(Vz0*h);
		
		r=sqrt(pow(X0,2.0)+pow(Y0,2.0)+pow(Z0,2.0));

		Vxi=Vx0-(h*(G*M*X0)/pow(r,3.0));
		
		Vyi=Vy0-(h*(G*M*Y0)/pow(r,3.0));
		
		Vzi=Vz0-(h*(G*M*Z0)/pow(r,3.0));

		//se declara que cada resultado se usara nuevamente para calcular las siguientes posiciones y velocidades 		
		X0=Xi;
		Y0=Yi;
		Z0=Zi;
		Vx0=Vxi;
		Vy0=Vyi;
		Vz0=Vzi;
		
		}
	//Se cierra el documento de escritura
	fclose(RO);
	}
	//Se cierra el documento de lectura
	fclose(fp);
return 0;
}
