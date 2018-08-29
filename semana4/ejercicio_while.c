/* Creado por Alan Macías. tercer programa semana 4. 29/08/18*/

#include<stdio.h>
#include<math.h>

int main()
{
  

  float C, K, F;
  float x,y,z,r,Q,Y;
  int opcion=1;
  char respuesta;

   
while(opcion==1 || opcion==2){  
        printf("teclear una opcion\n");
  printf("(1) para convertir temperaturas\n(2) para convertir coordenadas");
  scanf("%i", &opcion);
 switch(opcion)
{
  case 1:
           printf("vamos a hacer algunas conversiones de temperatura de °c a K y °F \n");
           printf("introduce un valor en °C \n");
           scanf("%f", &C);
           printf("hagamos la conversion de °C a K \n");
           K=(C+273.15);
           printf("El resultado en K es de %f K\n", K);
           printf("Ahora hagamos la conversion de °C a °F\n");
           F=(C*(9/5))+32;
           printf("El resultado en °F es de %f°F\n", F);
           printf("la temperatura inicial que introduciste fue de %f°C\n", C);
           break;
  case 2:
            printf("vamos a convertir de coordenadas cartesianas a esfericas\n");
            printf("introduce unas coordenadas de la forma (x,y,z)\n");
            scanf("%f" "%f" "%f", &x, &y, &z);
            printf("la coordenada que elegiste es: (%f,%f,%f)\n", x,y,z);
            r=sqrt(pow(x,2)+pow(y,2)+pow(z,2));
            Q=(acos(z/r))*(180/3.1415926);
            Y=(atan(y/x))*(180/3.1415926);
            printf("la coordenada de la forma (r,θ,φ) es: (%f,%f,%f) \n", r, Q, Y);
            printf("la coordenada cartesiana que introduciste en un inicio fue:(%f,%f,%f)\n", x,y,z);
            break;
  default: 
           printf("opcion invalida");
   	   break;

                 
}	    
printf("¿Quieres realizar otra operación\n (1 para si o 3 para no)");   	
scanf("%i", &opcion); 
 }
	 
        
		   
return 0;	
}

