#include<stdio.h>
#include<stdlib.h>

int main()
{
 int *ptr, i, n1, n2;
 printf("Introduce el numero de elementos n1:\n");
 scanf("%d", &n1);

 printf("Introduce el nuevo numero de elementos n2:\n");
 scanf("%d", &n2);

 ptr=(int*) malloc(n1 * sizeof(int));

 printf("Dirección de la memoria reservada\n");

 for(i=0; i<n1; ++i){
	printf("%x\t\n", ptr+1);
	}
 ptr=realloc(ptr, n2);

 for(i=0; i<n2; ++i){
	printf("%u\t\n", ptr+i);
	}
 free(ptr);
 return 0;
}
