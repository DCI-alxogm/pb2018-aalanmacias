/*creado por Alan Macias. primer ejemplo funciones. 10/10/18. semana 9*/

#include<stdio.h>
#include<math.h>

	void cuadrado ();
	
		int main(){
			cuadrado ();
			return 0;
			}
	
	void cuadrado(){
		
		float x,x2;
		
		printf("Introduce un número\n");
		scanf("%f",&x);
		x2=pow(x,2);
		printf("El cuadrado de %f es: %f\n",x,x2);
}
