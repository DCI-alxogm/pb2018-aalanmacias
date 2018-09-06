/*Creado por Alan Macías. Primer programa de ejemplo funcion For. semana 5. 03/09/18*/

#include<stdio.h>

int main()
{
	float temp_C, temp_K;
	float final, delta;
	int n, i;
        int opcion;
 printf("¿Estas lsito para comenzar? (1 para si/2 para no)\n");
 scanf("%d", &opcion); 
 while(opcion==1)
	{ 
	 printf("introduce con que temperatura inicial en °C quieres iniciar\n");
	 scanf("%f", &temp_C);
	 printf("intrduce hasta que temperatura maxima quieres llegar\n");
	 scanf("%f", &final);
	 printf("introduce cuantos valores intermedios quieres que arroje el programa\n");
	 scanf("%d", &n); 
	 delta=(final-temp_C)/n;
	 for(i=0;i<n;i++)
		{
		 temp_K=temp_C+273.15;
		 printf("%f %f\n", temp_C, temp_K);
		 temp_C=temp_C+delta; 
		}
	
 printf("¿Quieres hacer otras conversiones?(1 para si/ 2 para no)\n");
 scanf("%d", &opcion);
	}
return 0;
}
