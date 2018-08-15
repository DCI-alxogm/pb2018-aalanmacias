/*programa hecho por Alan Macías. 13 de agosto 2018. edades, segunda semana de clases*/

 #include<stdio.h>

 int main()
{
  
  int edad, edad2;
  char nombre[20];
  

    printf("Buen dia. Introduce tu nombre \n");
    scanf("%s" ,&nombre);
    printf("Hola %s \n", nombre);
    printf("introduce tu edad: \n");
    scanf("%i" ,&edad);
    printf("\ntu edad es: %i", edad);
    edad2=edad+10;
    printf("\ntu edad en el 2028 sera: %i", edad2);
 }

