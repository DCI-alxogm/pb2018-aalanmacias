/* Creado por Alan Macías. Programa que recibe el valor de una variable "X" y evalua los siguentes funciones:

y=exp(x)
y=sen(x)+2*tan(x/2)
y=ln(x)+3x² 

Semana 3. 20/08/18*/

#include<stdio.h>
#include<math.h>
 int main()
{
   
  float X, radian, y1, y2, y3;
 
  printf("realicemos algunas operaciones\n");
  printf("Introduce un valor para una variable x en la ecuacion y=exp(x)\n");
  scanf("%f", &X);
  y1=exp(-1*X);
  printf("el resultado es %f \n", y1);
  printf("ahora haremos la siguiente operacion: y=sen(x)+2*tan(x/2)\n");
  radian=X*0.017453;
  y2=(sin(radian))+2*tan(radian/2);
  printf("el resultado es %f \n", y2);
  printf("ahora haremos la siguiente operacion:y=ln(x)+3x² \n");
  y3=log(X)+(3*pow(X,2));
  printf("el resultado es %f \n", y3);
 return 0;
}
