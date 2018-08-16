/* este programa es creado por Alan Macías. para este programa se solicita introducir 4 numeros enteros. el programa debe imprimir a la pantalla las siguientes operaciones
e=(a+b)*c/d
e=((a+b)*c)/d
e=(a+b)*c/d
e=a+(b*c)/d */

 #include<stdio.h>
 
 int main ()
  
{
   float a, b, c, d;
   float resultado1, resultado2, resultado3, resultado4;  
  
   printf("vamos a realizar algunas operaciones. Tendras que introducir 4 valores enteros\n");
   printf("introduce el valor de a\n");
   scanf("%f", &a);
   printf("introduce el valor de b\n");
   scanf("%f", &b);
   printf("introduce el valor de c\n");
   scanf("%f", &c);
   printf("introduce el valor de d\n");
   scanf("%f", &d); 


   printf("ahora realizaremos la sigiente operación: e=(a+b)*c/d\n");
     resultado1 = ((a+b)*c/d);
   printf("el resultado es %f\n",resultado1);

   printf("ahora realizaremos la sigiente operación: e=((a+b)*c)/d\n");
     resultado2 = (((a+b)*c)/d);
   printf("el resultado es %f\n",resultado2);

   printf("ahora realizaremos la sigiente operación: e=(a+b)*c/d\n");
     resultado3 = ((a+b)*c/d);
   printf("el resultado es %f\n",resultado3);

   printf("ahora realizaremos la sigiente operación: e=a+(b+c)/d\n");
     resultado4 = (a+(b*c)/d);
   printf("el resultado es %f\n",resultado4);

  return 0;
}
