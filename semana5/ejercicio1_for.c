/*Creado por Alan Macías. Primer ejercicio semana 5. funcion For. 03/09/18. programa que evalua las funciones exponencial, logaritmo,seno, coseno y raiz cuadrada en un intervalo y con un espaciado definido por el usuario*/

#include<stdio.h>
#include<math.h>

int main()
{
 float x, delta;
 int a, b, n; 

 printf("Introduce un valor inicial con el cual se ralizaran las siguientes operaciones:\nexponencial\nlogaritmo\nseno\ncoseno\nraiz cuadrada");
 scanf("%d", &x);
 printf("introduce hasta que valor final quieres que dejen de realizarse las operaciones\n");
 scanf("%d", &b);
 printf("Introduce cuantas iteraciones quieres que se realicen");
 scanf("%d", &n);
 delta=(x-b)/n;
 for(a==0; a<n; a++)
 {
  x=x+n;
  printf("resultado de la operacion exponencial es:%f\n", exp(x));
  printf("resultado del logaritmo es: %f\n", log(x));
  printf("resultado del seno: %f\n",sin(x));
  printf("resultado del coseno: %f\n",cos(x));
  printf("resultado de la raiz cuadrada: %f\n",sqrt(x));
 }
 
return 0;
}

 
