#include<stdio.h>
#include<stdlib.h>

int main()
{
 int num, i, *ptr, sum=0;
 ptr=(int*) malloc(num*sizeof(int));//memoria reservada usando malloc

 printf("introduce el numero de elementos:\n");
 scanf("%d", &num);

 if(ptr==NULL){
	printf("Error! memoria no reservada.\n");
	exit(0);
	}
	
 printf("introduce los elementos del arreglo:\n");
 for(i=0;i<num; ++i){
	scanf("%d", ptr+1);
	sum+= *(ptr+i);
	}
 printf("sum=%d\n", sum);
 free(ptr);
 return 0;
}
