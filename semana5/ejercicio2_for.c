/* Creado por Alan Macías. segundo programa con funcion For. Haz un programa que calcule el factorial de un numero dado por el usuario, y que pregunte si queremos hacer un nuevo calculo. Semana 5. 03/09/18*/

#include<stdio.h>

int main()
{
 int a, b, opcion, n; 

 printf("¿Estas listo para comenzar? (1 para si / 2 para no)\n");
 scanf("%d", &opcion);


 while(opcion==1)
 {
  n=1;
  printf("introduce un numero para calcular su factorial\n");
  scanf("%i", &a);
  for(b=1;b<=a;b++)
  n=n*b;  
  printf("el resultado es %d\n", n);
  printf("¿quieres realizar otra operacion?\n(1 para si / 2 para no)\n");
  scanf("%d", &opcion);  
 }

return 0;
}
  
 
