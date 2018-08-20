/* Creado por Alan Macías. Programa que convierte temperaturas en °C a K y °F. y finalmente de °F a °C de regreso. Semana 3. 20/08/18 */

#include<stdio.h>

 int main()
{
   float C, K, F;
   
   printf("vamos a hacer algunas conversiones de temperatura \n");
   printf("introduce un valor en °C \n");
   scanf("%f", &C);
   printf("hagamos la conversion de °C a K \n");
   K=(C+273.15);
   printf("El resultado en K es de %f K\n", K);
   printf("Ahora hagamos la conversion de °C a °F\n");
   F=(C*(9/5))+32;
   printf("El resultado en °F es de %f°F\n", F);
   printf("la temperatura inicial que introduciste fue de %f°C\n", C);
   return 0;
}
