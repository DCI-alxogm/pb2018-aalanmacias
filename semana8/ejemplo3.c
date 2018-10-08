#include<stdio.h>

int main()
{
int MAX=3;
int var[]={10,100,200};
int i, *ptr;
//Asignamos la direccion del arreglo al apuntador
ptr=&var;

for(i=0; i<MAX; i++){
	printf("La direccion de la variable var[%d]=%x\n", i, ptr);
	printf("valor de la variable var[%d]=%d\n", i, *ptr);
	//nos movemos a la siguiente posicion en la memoria
	ptr++;
	}
return 0;
}
