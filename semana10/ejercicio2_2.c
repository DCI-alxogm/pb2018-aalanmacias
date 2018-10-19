/*Creado por Alan Macías. segunda parte del programa 2. semana 10. 17/10/18.*/
#include<stdio.h>
#include<math.h>

void temperaturas(float C){
	float /*C,*/ K, F;


	
	printf("vamos a hacer algunas conversiones de temperatura de °c a K y °F \n");
	printf("hagamos la conversion de °C a K \n");
	K=(C+273.15);
	printf("El resultado en K es de %f K\n", K);
	printf("Ahora hagamos la conversion de °C a °F\n");
	F=(C*(9/5))+32;
	printf("El resultado en °F es de %f°F\n", F);
	printf("la temperatura inicial que introduciste fue de %f°C\n", C);
}
