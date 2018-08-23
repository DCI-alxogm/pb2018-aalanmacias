/*creado por Alan Macías. ejemplo 4. semana 3. 22/08/18*/

#include<stdio.h>

int main()
{ 
 int numero1, numero2;
 printf("introduzca dos numeros enteros:\n");
 scanf("%i %i", &numero1, &numero2);

 if(numero1==numero2)
 {
     printf("resultado: %d = %d", numero1, numero2);
 }
 else if(numero1>numero2)
 {
     printf("resultado: %d > %d", numero1, numero2);
 }
 else
 { 
  printf("resultado: %d < %d", numero1, numero2);
 }
 
 return 0;
}
