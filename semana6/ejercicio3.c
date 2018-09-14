/*Creado por Alan Macias. Semana 6. 13/09/18. programa que calcula el valor de una funcion evaluada en un rango dado para que guarde el resultado en un archivo */

#include<stdio.h>
#include<math.h>

int main()
{
 float x, delta;
 int a, b, n;
 FILE *fp;
 fp=fopen("funciones_evaluadas.txt","w");
 printf("Introduce un valor inicial con el cual se ralizaran las siguientes operaciones:\nexponencial\nlogaritmo\nseno\ncoseno\nraiz cuadrada\n");
 scanf("%d", &x);
 printf("introduce hasta que valor final quieres que dejen de realizarse las operaciones\n");
 scanf("%d", &b);
 printf("Introduce cuantas iteraciones quieres que se realicen\n");
 scanf("%d", &n);
 delta=(x-b)/n;


 
 for(a==0; a<n; a++)
 {
  x=x+n;
  fprintf(fp, "resultado de la operacion exponencial es:%f\n", exp(x));
  fprintf(fp, "resultado del logaritmo es: %f\n", log(x));
  fprintf(fp, "resultado del seno: %f\n",sin(x));
  fprintf(fp, "resultado del coseno: %f\n",cos(x));
  fprintf(fp, "resultado de la raiz cuadrada: %f\n",sqrt(x));
 }

 
return 0;
 fclose(fp);
}

