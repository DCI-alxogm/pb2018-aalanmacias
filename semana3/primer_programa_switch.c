/*creado por Alan Macías. primer programa con el comando switch de la semana 3. 22/08/18.*/

#include<stdio.h>


int main()
{

  int opcion;
//pide elegir una opcion para realizar una accion.   
  printf("teclear una opcion\n");
//nos da las opciones que podemos elegir.
  printf("(1) para convertir temperaturas\n (2) para convertir coordenadas");
//pide introducir una de las opciones 
 scanf("%i", &opcion);

//comienza a dar los comandos a realizarse dependiendo de la accion elegida
  switch(opcion)
{
  case 1:
           printf("entre a la opcion 1");
           break;
  case 2:
           printf("entre a la opcion 2");
           break;
  default: 
           printf("opcion invalida");
           break;
}

}
           
