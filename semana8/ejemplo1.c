/*Creado por Alan Macías. Primer programa de ejemplo de la semana 8. Uso de apuntadores*/

#include<stdio.h>
int main()
{
int var=20; //declaracion de la variable
int *ip; //declaracion de la variable apuntador

ip=&var; //asigana la direccion de la variable var al apuntador ip*

printf("La direccion de la variable var es %x\n", (int) &var);
printf("Diereccion guardada en el apuntador ip: %X\n", (int) ip);
printf("El valor de *ip: %d\n", *ip);

return 0;
}
