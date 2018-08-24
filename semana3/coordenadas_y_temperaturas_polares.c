/*creado por Alan Macías. Union de los programas de conversion de temperaturas y conversion de coordenadas usando la funcion switch. semana 3. 22/08/18.*/

#include<stdio.h>
#include<math.h>

int main()
{
  

  float C, K, F;
  float x,y,r,A1, A2, A3, A4;
  int opcion;
//pide elegir una opcion para realizar una accion.   
  printf("teclear una opcion\n");
//nos da las opciones que podemos elegir.
  printf("(1) para convertir temperaturas\n(2) para convertir coordenadas cartesianas a polares");
//pide introducir una de las opciones 
 scanf("%i", &opcion);

//comienza a dar los comandos a realizarse dependiendo de la accion elegida
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
            printf("vamos a convertir de coordenadas cartesianas a polares\n");
            printf("introduce unas coordenadas de la forma (x,y)\n");
            scanf("%f" "%f", &x, &y);
            printf("la coordenada que elegiste es: (%f,%f)\n", x,y);

            r=sqrt(pow(x,2)+pow(y,2));
            A1=atan(y/x)*(180/3.1415926);
            A2=(atan(y/x)*(180/3.1415926))+180;
            A3=(atan(y/x)*(180/3.1415926))+180;
            A4=(atan(y/x)*(180/3.1415926))+360;

            if(x>0 && y>0)
            {
                printf("tu coordenada se encuentra en el cuadrante 1\n");
                printf("la coordenada de la forma polar (r,θ) es: (%f,%f) \n", r, A1);
            }
            else
            {
                if(x<0 && y>0)
                {
                    printf("tu coordenada se encuentra en el cuadrante 2\n");
                    printf("la coordenada de la forma polar (r,θ) es: (%f,%f) \n", r, A2);
                }
                else
                {
                    if(x<0 && y<0)
                    {
                        printf("tu coordenada se encuentra en el cuadrante 3\n");
                        printf("la coordenada de la forma polar (r,θ) es: (%f,%f) \n", r, A3);
                    }
                    else
                    {
                        if(x>0 && y<0)
                        {
                            printf("tu coordenada se encuentra en el cuadrante 3\n");
                            printf("la coordenada de la forma polar (r,θ) es: (%f,%f) \n", r, A4);
                        }
                        else
                        {
                            if(x==0 && y==0)
                            {
                                printf("tu coordenada se encuentra en el origen\n");
                            }
                            else
                            {
                                if(x==0 && y!=0)
                                {
                                    printf("la coordenada se encuentra en el eje de las ordenadas\n");
                                }
                                else(x!=0 && y==0);
                                {
                                    printf("la coordenada se encuentra en el eje de las abscisas\n");
                                }
                            }
                        }
                    }
                }
            }




            printf("la coordenada cartesiana que introduciste en un inicio fue:(%f,%f)\n", x,y);
            break;
  default: 
           printf("opcion invalida");
           break;
}

}
           
